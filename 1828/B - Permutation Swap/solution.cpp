#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int store[n+1];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            store[arr[i]]=i+1;
        }
        vector<int> dist;
        for(int i=0;i<n;i++)
        {if(abs(i+1-store[i+1])>0)
            dist.push_back((abs(i+1-store[i+1])));
        }
        int ans=0;
        for (int i = 0; i < dist.size(); i++)
        {
            ans = gcd(ans, dist[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}