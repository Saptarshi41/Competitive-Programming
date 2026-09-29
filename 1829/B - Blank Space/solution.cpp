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
        int sub=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                c++;
            else
            {
                if(c>sub)    
                    sub=c;
                c=0;
            }
          
                
        }
        if(sub>c)
            cout<<sub<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}