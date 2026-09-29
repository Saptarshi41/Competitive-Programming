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
        int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==2)
                ct++;
        }
        if(ct%2!=0)
            cout<< -1<<endl;
        else
        {    int index;
               int ct1=0;
            int a=ct/2;
            for(int i=0;i<n;i++)
            {
               
               if(arr[i]==2)
               {
                   ct1++;
               }
               if(ct1==a)
               {
                   index=i;
                   break;
               }
            }
            cout<<index+1<<endl;
        }
    }
    return 0;
}