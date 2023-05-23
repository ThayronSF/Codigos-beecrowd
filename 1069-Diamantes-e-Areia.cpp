#include <iostream>
using namespace std;

int main()
{
 int n, tamanho, contador, tempo;
 string s;

 cin >> n;

 for (int i = 0; i < n; i++)
 {
  cin >> s;
  tamanho = s.length();
  contador = 0;
  tempo = 0;

  for (int j = 0; j < tamanho; j++)
  {
   if(s[j] == '<')
    tempo++;
   if (s[j] == '>' && tempo > 0){
    contador++;
    tempo--;
   }
  }

  cout << contador << endl;
 }

 return 0;
}
