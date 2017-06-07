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
 * PARAMETROS: A descrição dos vertices de origem e de destino.
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
 * RETORNO: string
*/
bool Grafo::find_Vertice(const std::string &descricao) const
{
    return vertices.find(descricao) != vertices.end();
}

/* DESCRIÇÃO: Verifica se há uma aresta indexada na tabela hash
 *            com aquela chave,ou seja, verifica se a aresta
 *            esta cadastrada.
 * PARAMETROS: string
 * RETORNO: string
*/
bool Grafo::find_Aresta(const std::string &origem, const std::string &destino) const
{
    std::string descricao = montarDescricaoAresta(origem,destino);
    return arestas.find(descricao) != arestas.end();
}

void Grafo::createVertice(const std::string &descricao){
    if(find_Vertice(descricao))throw std::string("Vertice já existe");
    try
    {
        Vertice *novoVertice = new Vertice(descricao);
        vertices.insert({descricao,novoVertice});
    }catch(std::string &erro) { throw std::string(erro); }
     catch(std::bad_alloc) {throw std::string("Erro de alocação"); }
}

void Grafo::createAresta(std::string origem, std::string destino, int peso, bool isDirected)
{
    if(find_Aresta(origem,destino))throw std::string("Aresta já existe");
    try{
        std::string key = this->montarDescricaoAresta(origem,destino);
        if(!find_Vertice(origem) || !find_Vertice(destino))
            {throw std::string("Erro ao Criar Aresta");}

        Vertice *vertice_Origem = vertices[origem];
        Vertice *vertice_Destino = vertices[destino];
        vertice_Origem->addAdjacente(vertice_Destino);
        Aresta *ida = new Aresta(vertice_Origem,vertice_Destino,peso);
        arestas[key] = ida;

        if(!isDirected) {
            vertice_Destino->addAdjacente(vertice_Origem);
            Aresta *volta = new Aresta(vertice_Destino,vertice_Origem,peso);
            arestas.insert({montarDescricaoAresta(destino,origem),volta});
        }
    }catch(std::string &erro) {throw erro;}
}

bool Grafo::isDirected() const
{
    try
    {
        Matriz* grafo = this->toMatrix();
        bool resultado = !grafo->eSimetrica();
        delete grafo;
        return resultado;
    }catch(std::string &erro) {throw std::string(erro);}
}
int Grafo::verticeCount() const{
    return vertices.size();
}
int Grafo::arestaCount() const
{
    try
    {
        int sum = 0;
        for( const auto& vertice : vertices ) {
            sum +=  vertice.second->getAdjacentes().size( );
        }
        return sum;
    }catch(std::string &erro) {throw std::string(erro);}
}

Grafo* Grafo::fromMatrix(Matriz* matriz)
{
    Grafo* grafo = new Grafo(matriz);
    return grafo;
}

Matriz *Grafo::toMatrix() const{
    if(this->isEmpty()) throw std::string("Grafo vazio");
    Matriz* grafoMatriz = Matriz::zeros(verticeCount());

    std::unordered_map<std::string,int> matrix;
    int i= vertices.size()-1;
    for( const auto& vertice : vertices ) {
        matrix[vertice.first] = i--;
    }

    for( const auto& vertice : vertices ) {
        for( const auto& adjacente : vertice.second->getAdjacentes() ) {
            int linha = matrix[vertice.first];
            int coluna = matrix[adjacente.first];
            grafoMatriz->setElemento(1,linha,coluna);
        }
    }
    return grafoMatriz;
}
//================ Algoritmos Cormen ===================================
void Grafo::bfs(std::string origem)
{
    if(!find_Vertice(origem)){throw std::string("Vertice não pertence ao grafo"); }
    bfs(vertices[origem]);
}

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
        for( const auto& i : u->getAdjacentes() )
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
std::string Grafo::print_path(std::string origem, std::string destino)
{
    try{
        if(!find_Vertice(origem) || !find_Vertice(destino))
            {throw std::string("Vertice não pertence ao grafo"); }
        return print_path((*vertices[origem]),(*vertices[destino]));
    }catch(std::string &erro){throw std::string(erro);}
}

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

std::string Grafo::intToString(int i) const
{
    char a = (char) i+65;
    std::string b(" ");
    b[0] = a;
    return b;
}

void Grafo::clear()
{
    for( const auto& vertice : vertices )
        vertice.second->clear();
}

std::stack<std::string> *Grafo::vertice()
{
    std::stack<std::string> *all_Vertices = new std::stack<std::string>();
    for( const auto& vertice : vertices ) {
        all_Vertices->push(vertice.first);
    }
    return all_Vertices;
}

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
