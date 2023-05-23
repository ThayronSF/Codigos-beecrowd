#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int i, na, np, cont=0, assf=0;
    string nome, assinatura;
    cin>>na;
    while(na!=0)
    {
        unordered_map<string, string> lista;
        i=0;
        while(i<na)
        {
            cin>>nome>>assinatura;
            lista.insert(make_pair(nome, assinatura));
            i++;
        }
        cin>>np;
        i=0;
        while(i<np)
        {
            cin>>nome>>assinatura;
            for(auto x: lista)
            {
                if(nome==x.first)
                {
                    for(int j=0; j<nome.length(); j++)
                    {
                        if(assinatura[j]!=x.second[j])
                        {
                            cont++;
                        }
                    }
                }
            }
            if(cont>1)
                assf++;
            i++;
            cont=0;
        }
        std::cout << assf<<endl;
        assf=0;
        cin>>na;
    }
}
