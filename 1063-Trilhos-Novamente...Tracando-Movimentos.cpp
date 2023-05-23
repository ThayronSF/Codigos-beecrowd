#include <iostream>
#include <stack>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n; 
    char p;
    string f;
    cin >> n;
    do {
        bool t = true;
        do {
            char v[n], e[n];

            stack<char>P;

            for (int i = 0; i < n; i++) {
                cin>>p;
                v[i]=p;
                if (p == 0) {
                    t = false;
                    break;
                }
            }
            for (int i = 0; i < n; i++) {
                cin>>p;
                e[i]=p;
                if (p == 0) {
                    t = false;
                    break;
                }
            }
            if (t == false) {
                break;
            }

            int x = 0, y = 0;

            while (y < n) {
                if (!P.empty() && P.top() == e[x]) {
                    P.pop();
                    x++;
                    f+="R";
                } 
                else if (e[x] == v[y]) {
                    y++;
                    x++;
                      f+="IR";
                } else {
                    P.push(v[y]);
                    y++;
                    f+="I";
                }
            }

            while (!P.empty() && P.top() == e[x]) {
                P.pop();
                x++;
                f+="R";
            }

            if (!P.empty())
                cout << f << " Impossible" << endl;
            else
                cout << f << endl;

            f="";
            cin>>n;
        } while (n!=0);
    }while(n!=0);

    return 0;
}
