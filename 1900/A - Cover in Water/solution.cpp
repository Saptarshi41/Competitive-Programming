#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       string s;
       cin>>s;
       bool t=true;
       int ct=0;
       for(int i=1;i<n-1;i++)
       {
           if(s[i]=='.')
           {    ct++;
               if(s[i-1]=='.' && s[i+1]=='.')
               {
                   t=false;
                   break;
               }
           }
       }
       
       if(t==true)
        {
            if(s[0]=='.')
                ct++;
            if(s[n-1]=='.' && n!=1)
                ct++;
            cout<< ct<<endl;
        } 
       else
           cout<<2<<endl;
    }
    return 0;
}