#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 
    int t = 1;
     cin >> t;
    while (t--) {
        long long n,m;
        cin>>n>>m;
        vector<long long>bea(n);
        vector<long long>ver(m);
        for(int i=0;i<n;i++)
        {
            cin>>bea[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>ver[i];
        }
        long long sum1=bea[n-1];
        long long sum2=ver[m-1];
        for(int i=0;i<n-1;i++)
        {
            sum1=sum1+bea[i]-bea[i+1]+1;
        }
        for(int i=0;i<m-1;i++)
        {
            sum2=sum2+ver[i]-ver[i+1]+1;
        }
        if(sum1+1>sum2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}