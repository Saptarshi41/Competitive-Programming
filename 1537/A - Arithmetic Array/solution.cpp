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
            sum=sum+arr[i];
        }
        if(sum==n)
            cout<<0<<endl;
        else if(sum>n)
            cout<<(sum-n)<<endl;
        else
            cout<<1<<endl;
    }
}