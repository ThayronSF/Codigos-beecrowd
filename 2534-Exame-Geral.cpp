#include <iostream>
using namespace std;

int main()
{
    int nH, nC, n, i, x;
    while(cin>>nH>>nC){
      int L[nH];
      for(i=0; i<nH; i++)
      {
          cin>>n;
          L[i]=n;
      }

      for(i=0; i<nH; i++){
        for(int j=i+1; j<nH; j++){
          if(L[i]<L[j]){
            x=L[i];
            L[i]=L[j];
            L[j]=x;

          }
        }
      }

      i=0;
      while(i<nC){
        cin>>n;
        for(int j=0;j<nH;j++){
            if(n==j+1)
              cout<<L[j]<<endl;
        }
        i++;
      }
    }
}
