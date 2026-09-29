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
        for(int i=1;i<n;i++)
        {
            if(arr[i]%arr[i-1]==0 && arr[i-1]==1)
            {
                if(arr[i]%2==0 )
                {
                    arr[i]+=1;
                    arr[i-1]+=1;
                }
                else{
                    arr[i-1]+=1;
                }
            }
            if(arr[i]%arr[i-1]==0)
                arr[i]+=1;
                
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]%arr[i-1]==0)
                arr[i]+=1;
        }
         for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       
    }
}