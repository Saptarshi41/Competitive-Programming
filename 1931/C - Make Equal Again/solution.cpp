#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         int a=0;
         int b=n-1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[a])
                a++;
            else
                break;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]==arr[b])
                b--;
            else
                break;
        }
        
        if(a==n-1 && b==0)
            cout<<0<<endl;
       else{
         if(arr[a]==arr[b] )
            cout<<b-a-2+1<<endl;
        else
        {
            int m=max(a,n-1-b);
            cout<<n-(m+1)<<endl;
        }
       }
        
    }
    return 0;
 
}