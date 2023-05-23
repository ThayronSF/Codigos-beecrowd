#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

stack<string> pilha;

int main() {
  
  int n;
	char c;
	string aux;
	int cont;
	
	while (cin>>n)
	{
	  cont=0;
		pilha.push("FACE");
		for (int i=0; i<n; i++)
		{
			aux.clear();
			for (int j=0; j<4; j++)
			{
				cin>>c;
				aux.push_back(c);
			}
			string aux2=aux;
			reverse(aux2.begin(), aux2.end());
			
			if (pilha.top()==aux2)
			{
				cont++;
				pilha.pop();
				if (pilha.size()==0) pilha.push("FACE");
			}
			else
				pilha.push(aux);
		}
		cout<<cont<<'\n';

		while (!pilha.empty()){
      pilha.pop();
    } 
	}
  return 0;
}
