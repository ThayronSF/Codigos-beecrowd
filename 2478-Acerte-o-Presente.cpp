#include <iostream>
#include <iterator>
#include <unordered_map>
#include <iomanip>

using namespace std;

struct Presentes
{
    string p1;
    string p2;
    string p3;
};

int main()
{
    int r=0, qp;
    Presentes listap;
    string nome, p;
    bool y;
    std::unordered_map<string, Presentes>Lista;
    cin>>qp;
    for(int t=0; t<qp; t++)
    {
        cin>>nome>>listap.p1>>listap.p2>>listap.p3;
        Lista.insert(std::make_pair(nome, listap));
    }

    while(cin>>nome>>p)
    {   y = false;
        for(auto x: Lista)
        {
            if(nome==x.first)
            {
                if(p==x.second.p1||p==x.second.p2||p==x.second.p3)
                {
                    cout<<"Uhul! Seu amigo secreto vai adorar o/"<<endl;
                }
                else
                {
                    cout<<"Tente Novamente!"<<endl;
                }
                y=true;
            }
        }
        if(y==false)
        {
            cout<<"Tente Novamente!"<<endl;
        }
    }
}
