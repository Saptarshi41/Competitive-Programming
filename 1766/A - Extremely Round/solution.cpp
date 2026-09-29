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
      int ct=0;
      int store=n;
      while(store>0)
      {
          ct++;
          store=store/10;
      }
      cout<<9*(ct-1)+n/int(pow(10,ct-1))<<endl;
    }
    return 0;
}