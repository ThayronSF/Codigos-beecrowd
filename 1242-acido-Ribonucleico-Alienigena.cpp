#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
bool troca(char &a, char &b){
  return (a=='B' && b=='S') || (a=='C' && b=='F')|| (a=='S' && b=='B') || (a=='F' && b=='C');
}
int main() {
string rna;

while(cin>>rna){

  int rnas = 0;
  stack<char> pilha;
   for(int i =0;i <rna.size();i++){
       if(!pilha.empty() && troca(pilha.top(), rna[i])){
         pilha.pop();
             rnas++;
       }
        
        else{
          pilha.push(rna[i]);
        }
        
   }
   cout<<rnas<<"\n";
   
}
return 0;
}
