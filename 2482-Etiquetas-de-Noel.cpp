#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

int main()
{
    int qp, pc;
    string idioma, traducao, nomec;
    float preco, pf=0;
        std::unordered_map<string, string>Lista;
        cin>>qp;
        for(int t=0; t<qp; t++)
        {
            cin>>idioma;
            cin.ignore();
            getline(cin,traducao);

            Lista.insert(std::make_pair(idioma, traducao));
        }

        cin>>pc;
        for(int t=0; t<pc; t++)
        {
            cin.ignore();
            getline(cin,nomec);
            cin>>idioma;
            for(auto x: Lista)
            {
                if(idioma==x.first)
                {
                    cout<<nomec<<endl;
                    cout<<x.second<<endl;
                    cout<<"\n";
                }
            }
        }
    }
