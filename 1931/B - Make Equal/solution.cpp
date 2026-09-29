#include<iostream>
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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum=sum/n;
        bool t=true;
        int store=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sum)
                store=store+arr[i]-sum;
            else if(arr[i]==sum)
                continue;
            else{
                if(sum-arr[i]>store)
                {
                    t=false;
                    break;
                }
                else
                    store=store-(sum-arr[i]);
            }
        }
        if(t==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}