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
        int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2!=0)
                ct++;
        }
        if(sum%2==0)
        {
            if(ct==0 || ct==n)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}