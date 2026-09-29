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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n%2!=0)
            cout<<"NO"<<endl;
        else{
            bool t=true;
            for(int i=1;i<n;i+=2)
            {
                if(arr[i]<arr[i-1])
                    continue;
                else
                {
                    t=false;
                    break;
                }
            }
           if(t==true)
           {
             sort(arr,arr+n);
            int b=n/2;
            int a=b-1;
            if(arr[b]-arr[a]>1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
           }
           else
            cout<<"NO"<<endl;
        }
    }
}