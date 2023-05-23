#include <iostream>
#include <set>
#include <iomanip>
using namespace std;
int main() {

  int N, i, COD;
  while(cin>>N){
    i=0;
    set<int>Lista;
    while(i<N){
      cin>>COD;
      Lista.insert(COD);
      i++;
    }
    for(auto x: Lista){
      cout<<setfill('0') << setw(4) <<x<<endl;
    }
    N++;

  }
}
