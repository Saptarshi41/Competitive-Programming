#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>d)
        cout << -1 << endl;
        else if(b == d)
        {    if(a<c)
                cout<< -1 <<endl;
             else
                cout << abs(a-c) << endl;
        }
        else
        {    int x=abs(d-b);
             int y=a+x;
             if(y<c)
                 cout<< -1 <<endl;
             else
                cout << x+abs((x+a)-c)<<endl;
        }
    }
    return 0;
    }