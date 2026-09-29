#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
       int n,a,b;
       cin>>n>>a>>b;
        if(n==a && n==b)
            cout<<"yes"<<endl;
        else
        {
            if(n-(a+b)>=2)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}