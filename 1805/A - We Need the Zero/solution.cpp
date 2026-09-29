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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int xor1=0;
        for(int i=0;i<n;i++)
        {
            xor1=xor1 xor arr[i];
        }
       if(n%2==0)
       {
           if(xor1==0)
               cout<<0<<endl;
           else
               cout<< -1<<endl;
       }
       else
       {
           cout<<xor1<<endl;
       }
    }
    return 0;
}