#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int n, contp=0, contn=0;
  map<string, char> mapa;
  cin>>n;
  char comportamento;
  string nome;
  for(int i=0; i<n; i++){
    cin>>comportamento>>nome;
    mapa.insert(make_pair(nome, comportamento));
  }
  for(auto x: mapa){
    if(x.second=='+'){
      contp++;
    }
    else{
      contn++;
    }
  }
  for(auto x: mapa){
    cout<<x.first<<endl;
  }
  cout<<"Se comportaram: "<<contp<<" | Nao se comportaram: "<<contn<<endl;
}
