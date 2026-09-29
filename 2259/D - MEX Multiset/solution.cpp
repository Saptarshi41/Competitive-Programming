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
            if(arr[i]==0)
                ct++;
        }
        if(ct==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                    cout<<"B"<<endl;
                else
                    cout<<"A";
            }
            
        }
        else{
            if(ct==1)
                cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                int f=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)
                {
                   
                    if(f==0)
                    {
                        cout<<"A";
                         f++;
                    }
                    else
                        cout<<"B";
                }
                else
                    cout<<"C";
                
            }
            cout <<'
';
            }
            
        }
    }
}