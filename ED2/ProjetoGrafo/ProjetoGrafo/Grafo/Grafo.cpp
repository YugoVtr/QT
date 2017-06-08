#include "Grafo.h"

Grafo::Grafo():
    vertices(),
    arestas()
{
}
/* DESCRIÇÃO: Sobrecarga do Construtor.
 * PARAMETROS: Matriz de adjacencia
 * RETORNO: --
*/
Grafo::Grafo(Matriz* matriz):
    vertices(),
    arestas()
{
    try
    {
        for(int i=0;i<matriz->getQuantidadeDeLinhas();i++)                              //Define quais são os vertices,
            this->createVertice(intToString(i));                                        //e suas descrições.

        for(int i=0;i<matriz->getQuantidadeDeLinhas();i++)                              //Percorre a matriz de adjacencia
            for(int j=0;j<matriz->getQuantidadeDeColunas();j++)                         //para definir as arestas.
                if(matriz->getElemento(i,j)==1)                                         //Para qualquer valor diferente de
                    createAresta(intToString(i),intToString(j),0,true);                 //zero e criado uma aresta.

    }catch(std::string &erro) {throw std::string(erro);}
}

/* DESCRIÇÃO: Destrutor do Grafo.
 * PARAMETROS: --
 * RETORNO: --
*/
Grafo::~Grafo()
{
    for( const auto& vertice : vertices )                                               //Como os vertices e arestas
        if(vertice.second) delete vertice.second;                                       //são alocados dinamicamente
    for( const auto& aresta : arestas )                                                 //e necessario implementar o
        if(aresta.second) delete aresta.second;                                         //destrutor para desaloca-los.

}

/* DESCRIÇÃO: Padrão para montar a descrição da aresta.
 *            E utilizado para determinar a chave(key)
 *            da aresta dentro da tabela hash das arestas.
 * PARAMETROS: string,string (A descrição dos vertices de origem e de destino.)
 * RETORNO: string
*/
std::string Grafo::montarDescricaoAresta(const std::string &origem, const std::string &destino) const
{
    return std::string(origem) + "=>" + destino;
}

/* DESCRIÇÃO: Verifica se há um vertice indexado no tabela hash
 *            com aquela chave,ou seja, verifica se o vertice
 *            esta cadastrado.
 * PARAMETROS: string
 * RETORNO: bool
*/
bool Grafo::find_Vertice(const std::string &descricao) const
{
    return vertices.find(descricao) != vertices.end();
}

/* DESCRIÇÃO: Verifica se há uma aresta indexada na tabela hash
 *            com aquela chave,ou seja, verifica se a aresta
 *            esta cadastrada.
 * PARAMETROS: string
 * RETORNO: bool
*/
bool Grafo::find_Aresta(const std::string &origem, const std::string &destino) const
{
    std::string descricao = montarDescricaoAresta(origem,destino);
    return arestas.find(descricao) != arestas.end();
}

/* DESCRIÇÃO: Cria um novo vertice no Grafo, utilizando a
 *            descriçao para indexar o vertice na tabela
 *            hash que guarda os vertices.
 * PARAMETROS: string
 * RETORNO: void
*/
void Grafo::createVertice(const std::string &descricao){
    if(find_Vertice(descricao))throw std::string("Vertice já existe");                  //Verifica se o vertice já existe
    try
    {
        Vertice *novoVertice = new Vertice(descricao);                                  //Cria o vertice
        vertices.insert({descricao,novoVertice});                                       //Guarda o novo Vertice na hash 'vertices'.
    }catch(std::string &erro) { throw std::string(erro); }
     catch(std::bad_alloc) {throw std::string("Erro de alocação"); }
}

/* DESCRIÇÃO: Cria uma nova arestas no grafo, utilizando a
 *            descriçao dos vertices de origem e destino
 *            (ver o metodos 'montarDescricaoAresta') para
 *            indexar a aresta na tabela hash que guarda
 *            as arestas.
 * PARAMETROS: string, string (Descriçao dos vertices de origem e destino)
 * RETORNO: void
*/
void Grafo::createAresta(std::string origem,std::string destino,int peso,bool isDirected)
{
    if(find_Aresta(origem,destino))throw std::string("Aresta já existe");               //Verifica se a aresta já existe
    if(!find_Vertice(origem) || !find_Vertice(destino))                                 //Verifica se ambos os vertices foram criados
        {throw std::string("Erro ao Criar Aresta");}
    try{
        std::string key = this->montarDescricaoAresta(origem,destino);                  //Determina a chave para indexar a aresta

        Vertice *vertice_Origem = vertices[origem];
        Vertice *vertice_Destino = vertices[destino];
        vertice_Origem->addAdjacente(vertice_Destino);                                  //Adiciona o vertice destino adjacente ao
        Aresta *ida = new Aresta(vertice_Origem,vertice_Destino,peso);                  //vertice origem  e cria a aresta.
        arestas[key] = ida;                                                             //Inclui a aresta na hash 'arestas'

        if(!isDirected) {
            vertice_Destino->addAdjacente(vertice_Origem);                              //Se a aresta não e direcionada
            Aresta *volta = new Aresta(vertice_Destino,vertice_Origem,peso);            //Crio uma nova aresta com sentido
            arestas.insert({montarDescricaoAresta(destino,origem),volta});              //constrario (Destino->Origem)
        }
    }catch(std::string &erro) {throw erro;}
}

/* DESCRIÇÃO: Verifica se o grafo e direcionado.
 * PARAMETROS: --
 * RETORNO: bool (Retorna falso se para toda aresta
 *          que liga a->b exista uma aresta que ligue
 *          b->a, e verdadeiro caso contrario)
*/
bool Grafo::isDirected() const
{
    try
    {
        Matriz* grafo = this->toMatrix();                                               //Verifica utilizando a ideia
        bool resultado = !grafo->eSimetrica();                                          //de que um grafo não direcionado
        delete grafo;                                                                   //possui uma matriz de incidencia
        return resultado;                                                               //simatrica.
    }catch(std::string &erro) {throw std::string(erro);}
}

/* DESCRIÇÃO: Verifica a quantidade de vertices do grafo
 * PARAMETROS: --
 * RETORNO: int
*/
int Grafo::verticeCount() const
{                                                                                       //A quantidades de vertices e
    return vertices.size();                                                             //igual ao tamanho da lista(hash)
}

/* DESCRIÇÃO: Verifica a quantidade de aresta do grafo
 * PARAMETROS: --
 * RETORNO: int
*/
int Grafo::arestaCount() const
{
    try
    {                                                                                   //Se o grafo e direcionado retorna
        return (!this->isDirected()?(arestas.size()/2):arestas.size());                 //o tamanho da lista de arestas senão
    }catch(std::string &erro) {throw std::string(erro);}                                //retorna o tamanho da lista dividido por 2
}                                                                                       //pois uma aresta a->b e a mesma que b->a

/* DESCRIÇÃO: Converte um Grafo em uma matriz de adjacencia
 *            porem não armazena os pesos
 * PARAMETROS: --
 * RETORNO: Matriz
*/
Matriz *Grafo::toMatrix() const
{
    if(this->isEmpty()) throw std::string("Grafo vazio");                               //Verifica se o grafo esta vazio
    Matriz* grafoMatriz = Matriz::zeros(verticeCount());                                //Cria uma matriz contendo apenas
                                                                                        //os vertices.
    std::unordered_map<std::string,int> matrix;                                         //hash auxiliar utilizada enumerar
    int i= vertices.size()-1;                                                           //os vertices.
    for( const auto& vertice : vertices )
        matrix[vertice.first] = i--;                                                    //Determina um numero para cada vertice

    for( const auto& vertice : vertices ) {                                             //Para cada vertice do grafo
        for( const auto& adjacente : vertice.second->getAdjacentes() ) {                //Percorre a lista de adjacencia
            int linha = matrix[vertice.first];                                          //determina a linha
            int coluna = matrix[adjacente.first];                                       // e a coluna em que existe
            grafoMatriz->setElemento(1,linha,coluna);                                   //uma aresta
        }
    }
    return grafoMatriz;
}
//================ Algoritmos Cormen ===================================
/* DESCRIÇÃO: Realiza a chamada para o BFS
 * PARAMETROS: string (descrição do vertice de origem)
 * RETORNO: void
*/
void Grafo::bfs(std::string origem)
{
    if(!find_Vertice(origem))                                                           //Verifica se o vertice existe e
        {throw std::string("Vertice não pertence ao grafo"); }                          //busca o vertice na lista de vertices
    bfs(vertices[origem]);                                                              //para realizar o BFS
}

/* DESCRIÇÃO: Realiza o BFS (busca em largura, descrita no livro ALGORITMOS
 *            de THOMAS H. CORMEN 3° EDIÇAO na PAGINA  423.
 * PARAMETROS: Vertice*
 * RETORNO: void
*/
void Grafo::bfs(Vertice* origem)
{
    this->clear();
    origem->setCor(cinza);
    origem->setDistancia(0);
    origem->setPredecessor(0);

    std::queue<Vertice*> Q;
    Q.push(origem);
    while(!Q.empty())
    {
        Vertice* u = Q.front();
        Q.pop();
        for(const auto& i : u->getAdjacentes())
        {
            Vertice *v = i.second;
            if(v->getCor()==branco)
            {
                v->setCor(cinza);
                v->setDistancia(u->getDistancia()+1);
                v->setPredecessor(u);
                Q.push(v);
            }
        }
        u->setCor(preto);
    }
}

/* DESCRIÇÃO: Realiza a chamada o print_path
 * PARAMETROS: string (descrição do vertice de origem e destino)
 * RETORNO: void
*/
std::string Grafo::print_path(std::string origem, std::string destino)
{
    try{
        if(!find_Vertice(origem) || !find_Vertice(destino))
            {throw std::string("Vertice não pertence ao grafo"); }
        return print_path((*vertices[origem]),(*vertices[destino]));
    }catch(std::string &erro){throw std::string(erro);}
}

/* DESCRIÇÃO: Realiza o print_path (que determina o caminho minimo
 *            da origem ao destino em um grafo não ponderado, descrita
 *            no livro ALGORITMOS de THOMAS H. CORMEN 3° EDIÇAO na PAGINA  427.
 * PARAMETROS: Vertice,Vertice (os Vertices de origem e de destino)
 * RETORNO: string (que mostra o caminho da origem até o destino)
*/
std::string Grafo::print_path(Vertice origem,Vertice destino)
{
    try{
        if(origem==destino) return origem.getDescricao();
        else{
            if(!destino.getPredecessor()){
               throw std::string("Nenhum caminho de "+origem.getDescricao()
                                 +" para "+destino.getDescricao());
            }
            else{
                std::string caminho(this->print_path(origem,(*destino.getPredecessor())));
                caminho = caminho + " => "+ destino.getDescricao();
                return caminho;
            }
        }
    }catch(std::string &erro){throw std::string(erro);}
        return "";
}

/* DESCRIÇÃO: Converte um inteiro em seu respectivo caracter representado
 *            na tabela ascii. (Utilizado para das nome aos vertices)
 * PARAMETROS: int
 * RETORNO: string
*/
std::string Grafo::intToString(int i) const
{
    char a = (char) i+65;
    std::string b(" ");
    b[0] = a;
    return b;
}

/* DESCRIÇÃO: atribui a distancia de todos os vertices como INFINITA,
 *            seus predecessores como NIL e suas cores como BRANCA.
 * PARAMETROS: int
 * RETORNO: string
*/
void Grafo::clear()
{
    for( const auto& vertice : vertices )
        vertice.second->clear();
}

/* DESCRIÇÃO: Retorna a descriçao de todos os
 *            vertices do grafo.
 * PARAMETROS: --
 * RETORNO: stack<string> (Uma pilha de string)
*/
std::stack<std::string> *Grafo::vertice()
{
    std::stack<std::string> *all_Vertices = new std::stack<std::string>();
    for( const auto& vertice : vertices ) {
        all_Vertices->push(vertice.first);
    }
    return all_Vertices;
}

/* DESCRIÇÃO: Retorna a descriçao de todas as
 *            arestas de um determinado vertice.
 * PARAMETROS: string (Descriçao do vertice das quais se quer
 *             as arestas)
 * RETORNO: stack<string> (Uma pilha de string)
*/
std::stack<std::string>* Grafo::aresta(const std::string &origem)
{
    if(vertices.find(origem) == vertices.end())
        {throw std::string("Vertice não encontrado");}

    std::unordered_map<std::string,Vertice*> adjacentes = vertices[origem]->getAdjacentes();
    std::stack<std::string> *all_Arestas = new std::stack<std::string>();
    for( const auto& vertice : adjacentes )
    {
        std::string key = this->montarDescricaoAresta(origem,vertice.first);
        if(arestas.find(key) == arestas.end())
            {throw std::string("Aresta não encontrada");}

        Aresta *resultado = arestas[key];
        std::string adjacente(std::string("=>") + std::to_string(resultado->getPeso()) + "|" + vertice.first);
        all_Arestas->push(adjacente);
    }
    return all_Arestas;
}
