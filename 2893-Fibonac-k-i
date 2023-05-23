#include <iostream>
#include <cstring>
#include <queue>

using namespace std;
int main()
{
    unsigned long long int r,c=0;
    cin>>r;

    while(c<r)
    {
        unsigned long long int cont=0, x, Final=0, N, Soma=0;
        queue<unsigned long long int> fila;
        cin>>x;
        cin>>N;
        if(N<x)
        {
            x=N;
            for(unsigned long long int i=0; i<x; i++)
            {
                fila.push(i);
                Final=i;
                cont++;
            }
        }
        if(x<N)
        {

            for(unsigned long long int i=0; i<x; i++)
            {
                fila.push(i%1000007);
                Soma=(Soma+i)%1000007;
            }
            fila.push(Soma);
            cont=x+1;

            for(cont; cont<N; cont++)
            {
                Soma=(((Soma*2)+(1000007-fila.front()))%1000007);
                Final=Soma;
                fila.pop();
                fila.push(Final);
            }
        }
        cout<<Final<<endl;
        c++;
    }

    return 0;
}
