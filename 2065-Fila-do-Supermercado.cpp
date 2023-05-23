#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	
	cin >> n;
	cin >> m;
	int v[10005];
	for(int i = 1; i <= n; i++){
		cin >> v[i];
	}
  int resp=0;
  priority_queue< pair<int,int>>fila;
  for(int i=1;i<=n;i++){
  fila.push(make_pair(0,-i));
  }
  while(m--){
    int c,b=0;
    cin>> c;
    int id = -fila.top().second;
    int l = -fila.top().first;
    fila.pop();
    b = l+v[id]*c;
    fila.push(make_pair(-(b),-id));
    resp =max ( resp,b);
  }
  cout<<resp<<endl;
}
