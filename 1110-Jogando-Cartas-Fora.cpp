#include<iostream>
#include <random>
using namespace std;


class No
{
private:
    No *prox;
public:
    int val;
    No(int val)
    {
        this->val = val;
        this->prox = NULL;
    }

    int obterValor()
    {
        return val;
    }

    No* obterProx()
    {
        return prox;
    }

    void setProx(No* p)
    {
        prox = p;
    }
};

class Fila
{
private:
    No* frente;
    No* tras;

public:
    Fila()
    {
        frente = NULL;
        tras = NULL;
    }
    Fila(int val)
    {
        tras = new No(val);
        frente = tras;
    }
    ~Fila()
    {
        delete tras;
    }

    bool vazia()
    {
        return (frente == NULL);
    }

    int tamanho(){
        if(vazia())
            return 0;

        No* posicao = frente;
        int tam = 0;

        // percorre a Fila
        do
        {
            posicao = posicao->obterProx();
            tam++;
        }
        while(posicao);

        return tam;
    }

    void inserir_na_fila(int val)
    {
        No* nova_pos = new No(val);

        if(vazia())
        {
            frente = nova_pos;
            tras = nova_pos;
        }
        else
        {
            tras->setProx(nova_pos);
            tras = nova_pos;
        }
    }

    void remover_da_fila()
    {
        if(frente==tras){
            frente=NULL;
            tras=NULL;
        }
        else {
            No *aux;
            No *posicao = frente;
            aux = posicao->obterProx();
            frente = aux;
            delete posicao;
        }
    }

    void mostrar()
    {
        cout << "\nImprimindo todos os elementos...\n";
        No* posicao = frente;

        if(vazia())
            cout << "A Fila NAO possui elementos!!\n";
        else
        {
            while(posicao)
            {
                cout << posicao->obterValor() << endl;
                posicao = posicao->obterProx();
            }
            cout << endl;
        }
    }

    int front(){
        if(!vazia())
            return this->frente->val;
        else
            throw(20);
    }
    void limpa(){
        No* limpa = new No(0);
        No* d2 = frente;
        while(d2){

            limpa->obterProx();
        }
        free (tras);
    }
};

int main()
{
    int lim, aux;

    cin>>lim;
    do
    {
        Fila C;
        aux = lim - 1;
        int z[aux];

        for (int i = 1; i <= lim; i++)
        {
            C.inserir_na_fila(i);
        }

        while (aux > 0)
        {
            for (int i = 0; i < lim - 1; i++)
            {
                z[i] = C.front();
                C.remover_da_fila();
                C.inserir_na_fila(C.front());
                C.remover_da_fila();
                aux--;
            }
        }
        int i = 0;
        cout << "Discarded cards: ";
        while (i < lim - 1)
        {
            cout << z[i];
            if (i < lim - 2)
                cout << ", ";
            i++;
        }
        cout << "\nRemaining card: " << C.front();
        cout<<"\n";
        cin>>lim;
    }
    while(lim!=0);
    return 0;
}
