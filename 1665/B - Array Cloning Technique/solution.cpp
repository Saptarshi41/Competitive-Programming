#include<iostream>
#include<algorithm>
#include<cmath>
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
        if(n==1)
            cout<<0<<endl;
        else{
            sort(arr,arr+n);
            int ct=1;
            int m=0;
            for(int i=1;i<n;i++)
            {
                if(arr[i]==arr[i-1])
                    ct++;
                else{
                    m=max(ct,m);
                    ct=1;
                }
              
            }
 
              m=max(ct,m);
                double g=n-m;
               
                double f=ceil(log2(double(g/m)+1));
                
                cout<<g+int((f))<<endl;
        }
    }
}