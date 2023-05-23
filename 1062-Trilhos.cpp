#include <iostream>
#include <stack>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, p;
    cin >> n;
    do {
        bool t = true;
        do {
            int v[n];

            stack<int>P;

            for (int i = 0; i < n; i++) {
                cin>>p;
                v[i]=p;
                if (p == 0) {
                    t = false;
                    break;
                }
            }
            if (t == false) {
                break;
            }

            int x = 0, y = 1;
            while (y <= n) {
                if (!P.empty() && P.top() == v[x]) {
                    P.pop();
                    x++;
                } else if (v[x] == y) {
                    y++;
                    x++;
                } else {
                    P.push(y);
                    y++;
                }
            }
            while (!P.empty() && P.top() == v[x]) {
                P.pop();
                x++;
            }

            if (!P.empty())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;

        } while (1);
            
        cout<<"\n";
        cin>>n;

    }while(n!=0);

    return 0;
}
