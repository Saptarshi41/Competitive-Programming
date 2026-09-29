#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==-1)
                ct++;
            
        }
        if(ct==n)
        {   if(n==1)
                cout<<1<<endl;
            else{
                 cout<<1<<" ";
            for(int i=1;i<n-1;i++)
                cout<<0<<" ";
            cout<<1<<endl;
            }
           
        }
        else
        {
           int f,l;
           for(int i=0;i<n;i++)
           {
            if(arr[i]==1)
            {
                f=-1;
                break;
            }
            if(arr[i]==-1)
            {
                f=i;
                break;
            }
           }
           for(int i=n-1;i>=0;i--)
           {
                if(arr[i]==1)
            {
                l=-1;
                break;
            }
            if(arr[i]==-1)
            {
                l=i;
                break;
            }
           }
           
            vector<int>store;
            if(f!=-1)
                store.push_back(f);
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                    store.push_back(i);
            }
            if(l!=-1)
                store.push_back(l);
            int m=-1;
            
            int ind1,ind2;
            for(int i=0;i<store.size()-1;i++)
            {
                if(store[i+1]-store[i]>m)
                {
                    m=store[i+1]-store[i];
                    ind1=store[i];
                    ind2=store[i+1];
                }
            }
           
            for(int i=0;i<n;i++)
            {
                if(arr[i]==-1)
                {
                    if(i==ind1 || i==ind2)
                        arr[i]=1;
                    else
                        arr[i]=0;
                }
            }
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout <<'
';
        }
    }
}