#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
 
    int t = 1;
     cin >> t;
    while (t--) {
        long long n,k;
        
        cin>>n>>k;
        if(n%2==0)
            cout<<"yes"<<endl;
        else
        {
            if(n<k)
                cout<<"no"<<endl;
            else
            {
                if(k%2==0)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
            }
        }
    }
    return 0;
}