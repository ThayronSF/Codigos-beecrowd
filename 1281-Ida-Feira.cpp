#include <iostream>
#include <iterator>
#include <unordered_map>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int qx, i=0, qp, pc, quant;
    string nome, nomec;
    float preco, pf=0;
    cin>>qx;
    while(i<qx)
    {
        std::unordered_map<string, float>Lista;
        cin>>qp;
        for(int t=0; t<qp; t++)
        {
            cin>>nome>>preco;
            Lista.insert(std::make_pair(nome, preco));
        }

        cin>>pc;
        for(int t=0; t<pc; t++)
        {
            cin>>nomec>>quant;
            for(auto x: Lista)
            {
                if(nomec==x.first)
                {
                    pf+=(quant*x.second);
                }
            }
        }
        cout<<"R$ "<<pf<<endl;
        pf=0;
        i++;
    }
}
