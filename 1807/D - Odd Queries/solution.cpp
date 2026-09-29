#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> arr(n);
        vector<int>prefix_sum;
        prefix_sum.push_back(0);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
            
            prefix_sum.push_back(sum);
        }
        while(q--)
        {   int store=sum;
            int l,r,k;
            cin>>l>>r>>k;
            int x=l-1;
            
 
            int minus=prefix_sum[r]-prefix_sum[x];
            store=store-minus+(r-l+1)*k;
            if(store%2==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}