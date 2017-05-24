#ifndef SORT_H
#define SORT_H

namespace ED2
{
    template <class Tipo>
    class Sort
    {
    private:
        static void troca(Tipo &a,Tipo &b);
        static void troca(Tipo v[],int i,int j);
        static int filhoEsquerda(int i);
        static int filhoDireita(int i);
        static void maxHeap(Tipo v[], int n, int i, bool (*compare)(Tipo,Tipo));
        static void construirHeap(Tipo v[],int n, bool (*compare)(Tipo,Tipo));
        static void merge(Tipo v[], int inicio, int meio, int fim,Tipo *w, bool (*compare)(Tipo,Tipo));
        static void merge_Sort(Tipo v[],int i, int t, bool (*compare)(Tipo,Tipo));
        static int selecionaPivo (Tipo v[], int inicio, int final, bool (*compare)(Tipo,Tipo));
        static void quick_Sort(Tipo v[],int inicio,int fim, bool (*compare)(Tipo,Tipo));

    public:
        static void bubble_Sort(Tipo v[], int t, bool (*compare)(Tipo,Tipo));
        static void heap_Sort(Tipo v[],int n, bool (*compare)(Tipo,Tipo));
        static void insert_Sort(Tipo v[], int t, bool (*compare)(Tipo,Tipo));
        static void merge_Sort(Tipo v[], int t, bool (*compare)(Tipo,Tipo));
        static void quick_Sort(Tipo v[],int fim, bool (*compare)(Tipo,Tipo));
        static void selection_Sort(Tipo v[],int n, bool (*compare)(Tipo,Tipo));
    } ;

    //----Metodos de troca--------------------------------
    template <class Tipo>
    void Sort<Tipo>::troca(Tipo &a,Tipo &b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    template <class Tipo>
    void Sort<Tipo>::troca(Tipo v[],int i,int j)
    {
        Tipo aux = v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    //----Metodos do Heap--------------------------------
    template <class Tipo>
    int Sort<Tipo>::filhoEsquerda(int i){ return i+i+1; }

    template <class Tipo>
    int Sort<Tipo>::filhoDireita(int i){ return i+i+2; }

    template <class Tipo>
    void Sort<Tipo>::maxHeap(Tipo v[], int n, int i, bool (*compare)(Tipo,Tipo))
    {
        int p=i;
        int e=filhoEsquerda(i);
        if(e<n){
            if((*compare)(v[p],v[e]))
            {
                p = e;
            }
            int d = filhoDireita(i);
            if(d<n)
            {
                if((*compare)(v[p],v[d]))
                {
                    p=d;
                }
            }
            if(p!=i)
            {
                troca(v,p,i);
                maxHeap(v,n,p,(*compare));
            }
        }
    }
    template <class Tipo>
    void Sort<Tipo>::construirHeap(Tipo v[],int n, bool (*compare)(Tipo,Tipo))
    {
        for(int i=(n-2)/2;i>=0;i--)
        {
            maxHeap(v,n,i,(*compare));
        }
    }
    //---------Metodos do Merge -------------------------------------------
    template <class Tipo>
    void Sort<Tipo>::merge(Tipo v[], int inicio, int meio, int fim,Tipo *w, bool (*compare)(Tipo,Tipo))
    {
        int i = inicio, m = meio+1, cont = 0;
        while(i <= meio && m<=fim)
        {
            if((*compare)(v[i],v[m]))
            {
                w[cont++]=v[i++];
            }else
            {
                w[cont++]=v[m++];
            }
        }
        while(i<=meio)
        {
            w[cont++]=v[i++];
        }
        while(m<=fim)
        {
            w[cont++]=v[m++];
        }
        for(i=0;i<cont;i++)
        {
            v[inicio+i] = w[i];
        }
    }
    template <class Tipo>
    void Sort<Tipo>::merge_Sort(Tipo v[], int i ,int t, bool (*compare)(Tipo,Tipo))
    {
        if(i<t)
        {
            Tipo *w = new Tipo[t-i+1];
            int meio = (i+t)/2;
            merge_Sort(v,i,meio, (*compare));
            merge_Sort(v,meio+1,t, (*compare));
            merge(v,i,meio,t,w, (*compare));
            delete[] w;
        }
    }
    //----------Metodos do quick----------------------------------------------
    template <class Tipo>
    int Sort<Tipo>::selecionaPivo (Tipo v[], int inicio, int final, bool (*compare)(Tipo,Tipo))
    {
       int i,j;
       Tipo x=v[final];
       i = inicio-1;
       for(j=inicio;j<final;j++)
       {
            if((*compare)(v[j],x))
            {
                i++;
                troca(v,i,j);
            }
       }
       troca(v,++i,final);
       return i;
    }
    template <class Tipo>
    void Sort<Tipo>::quick_Sort(Tipo v[],int inicio,int fim, bool (*compare)(Tipo,Tipo))
    {
        if(inicio < fim)
        {
            int p = selecionaPivo(v,inicio,fim, (*compare));
            quick_Sort(v, inicio, p-1, (*compare));
            quick_Sort(v, p+1, fim, (*compare));
        }
    }

    //--------PUBLICOS--------------------------------------------------------
    template <class Tipo>
    void Sort<Tipo>::bubble_Sort(Tipo v[], int t, bool (*compare)(Tipo,Tipo))
    {
        for(int i=0; i<t-1 ; i++ )
        {
            for(int j=i+1; j<t ; j++ )
            {
                if((*compare)(v[j],v[i]))
                {
                    troca(v,i,j);
                }
            }
        }
    }
    template <class Tipo>
    void Sort<Tipo>::heap_Sort(Tipo v[],int n, bool (*compare)(Tipo,Tipo))
    {
        construirHeap(v,n, (*compare));
        for(int i=1;i<=n;i++)
        {
            troca(v,0,n-i);
            maxHeap(v,n-i,0, (*compare));
        }
    }
    template <class Tipo>
    void Sort<Tipo>::insert_Sort(Tipo v[], int t, bool (*compare)(Tipo,Tipo))
    {
        for(int i = 1; i < t; i++)
        {
            Tipo aux;
            int j;
            aux = v[i];
            for(j=i-1 ; (j >= 0) && ((*compare)(aux,v[j])) ; j--)
            {
                v[j + 1] = v[j];
            }
            v[j + 1] = aux;
        }
    }
    template <class Tipo>
    void Sort<Tipo>::merge_Sort(Tipo v[], int t, bool (*compare)(Tipo,Tipo))
    {
        merge_Sort(v,0,t, (*compare));
    }
    template <class Tipo>
    void Sort<Tipo>::quick_Sort(Tipo v[],int fim, bool (*compare)(Tipo,Tipo))
    {
        quick_Sort(v,0,fim, (*compare));
    }
    template <class Tipo>
    void Sort<Tipo>::selection_Sort(Tipo v[],int n, bool (*compare)(Tipo,Tipo))
    {
        int indice = 0;
        for(int i=0; i<n-1;i++)
        {
            indice = i ;
            for(int j=i+1; j<n;j++)
            {
                if((*compare)(v[j],v[indice])){indice = j;}
            }
            troca(v,i,indice);
        }
    }
}


#endif // SORT_H
