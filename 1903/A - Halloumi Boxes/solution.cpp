#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for (int i=1;i<=a;i++)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        if (k>=2)
        {
            
            cout<<"YES
 ";
        }
        else{
            bool x=false;
             for( int k=0;k<n-1;k++)
            {
                
                for(int l=0;l<n-k-1;l++)
                {
                    if(arr[l]>arr[l+1])
                    {
                        swap(arr[l],arr[l+1]);
                        x=true;
                    }
                }
             
                
            }
               if(x==true)
                    cout<<"NO
 ";
                    
                if(x==false)
                    cout<<"YES
 ";
                    
            
                    
        }
        
    }
}