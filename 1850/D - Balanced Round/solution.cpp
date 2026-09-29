#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        cout<< 0 <<endl;
        else{
            int store=0;
        int ct=1;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(abs(arr[i]-arr[i-1])<=k)
            {
                ct++;
            }
            else{
                ct=1;
                store=max(ct,store);
            }
            store=max(ct,store);
        }
        cout<< n-(store) <<endl;
        }
        
    }
}