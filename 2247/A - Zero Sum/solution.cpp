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
        if(n%2!=0)
            cout<<"no"<<endl;
        else
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum=sum+arr[i];
            }
            sum=sum/2;
            if(sum%2==0)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}