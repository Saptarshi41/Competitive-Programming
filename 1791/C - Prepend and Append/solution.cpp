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
       int i=0;
       int j=n-1;
       while(s.size()!=0)
       {
           if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0'))
           {
               s.erase(i,1);
               s.erase(j-1,1);
               i=0;
               j=s.size()-1;
           }
           else
               break;
       }
       cout<< s.size()<<endl;
    }
    return 0;
}