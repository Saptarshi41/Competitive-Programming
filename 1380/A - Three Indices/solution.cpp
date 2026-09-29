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
        int a=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                a=i;
                break;
            }
        }
        if(a==-1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a+1<<" "<<a+2<<endl;
        }
    }
}