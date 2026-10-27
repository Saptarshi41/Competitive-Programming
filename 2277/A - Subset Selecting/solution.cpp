#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m=*max_element(arr.begin(),arr.end());
        vector<int>hash(m+1,0);
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        int ans=0;
        bool t=true;
        int store=0;
        for(int i=0;i<m+1;i++)
        {
            if(hash[i]==0)
            {
                ans=i;
                t=false;
                break;
            }
            if(hash[i]>k)
                store=store+hash[i]-k;
            else if(hash[i]==k)
                continue;
            else
            {
                int req=k-hash[i];
                if(store>=req)
                {
                    store=store-req;
                }
                else
                {
                    ans=i;
                    t=false;
                    break;
                }
            }
        }
        if(t==false)
            cout<<ans<<endl;
        else
            cout<<m+1<<endl;
    }
}