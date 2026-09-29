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
        int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0 )
            {
                if(i==0)
                    continue;
                else if(i==n-1)
                    continue;
                else
                    ct++;
            }
        }
        
        if(arr[0]==0 && arr[n-1]==0)
            cout<<0<<endl;
        else if(arr[0]==0 || arr[n-1]==0)
        {
            if(ct>=1)
                cout<<1<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            if(ct>=2)
                cout<<2<<endl;
            else
                cout<<-1<<endl;
        }
    }
}