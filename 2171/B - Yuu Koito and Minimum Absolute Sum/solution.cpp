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
            if((i!=0 && i!=n-1) && arr[i]==-1)
                arr[i]=0;
        }
        int store=0;
        for(int i=1;i<n;i++){
            store=store+(arr[i]-arr[i-1]);
        }
        if(arr[n-1]==-1 && arr[0]!=-1)
        {
           store=store+1;
           if(store<=0)
            arr[n-1]=-store;
           else
            arr[n-1]=0;
           cout<<abs(store+arr[n-1])<<endl;
        }
        else if(arr[0]==-1 && arr[n-1]!=-1)
        {
            store=store-1;
            if(store<=0)
                arr[0]=0;
            else
                arr[0]=store;
            cout<<abs(store-arr[0])<<endl;
        }
        else if(arr[0]==-1 && arr[n-1]==-1)
        {
            if(store<=0)
            {
                arr[n-1]=-store;
                arr[0]=0;    
            }
            else
            {
                arr[n-1]=0;
                arr[0]=store;
            }
            cout<<abs(store+arr[0]+arr[n-1])<<endl;
        }
        else
        {
            cout<<abs(store)<<endl;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"
";
    }
}