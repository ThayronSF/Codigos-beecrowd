#include <iostream>
#include <iterator>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    int qx, i=0, quant;
    string nome, b;
    cin>>qx>>ws;
    while(i<qx)
    {
        if(i!=0)
          cout<<endl;
          
        std::map<string, int> Especies;
        int cont=0;
        while(getline(cin,nome) && !nome.empty())
        {
            Especies[nome]++;
            cont++;
        }
        for(auto x: Especies)
        {
            cout<<x.first<<" "<<((100.0*x.second)/cont)<<endl;
        }
        i++;
    }
}
