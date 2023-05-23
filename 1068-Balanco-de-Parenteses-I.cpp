#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
int main() {
  int tamanho, abre = 0, fecha=0;
  bool c;
  string expressao;
  while(getline(cin, expressao)){
    c=true;
    stack <char> p;
    tamanho=expressao.length();

    for (int i = 0; i < tamanho; i++){
      if(expressao[i]=='('){
        abre++;
        p.push(expressao[i]);
      }

      if(expressao[i]==')' && (p.empty() ||  p.top()!='(')) {
        c = false;
      }

      if(expressao[i]==')' && !p.empty() && p.top()=='(' ){
        fecha++;
        p.pop();
      }

    }

    if(abre==fecha && c == true){
      cout<<"correct"<<endl;
    }
    else{
      cout<<"incorrect"<<endl;
    }

    abre=0;
    fecha=0;
  }
  return 0;
}
