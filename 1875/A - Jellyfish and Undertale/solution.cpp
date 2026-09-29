#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long i=0;
        long long ct=0;
        
        while(i<n )
        {   
                if(b+arr[i]<=a)
            {
                b=b+arr[i];
                i++;
            }
            else{
                if(b==1)
                {
                    b=a;
                    i++;
                }
 
            }
            if(i<n)
            {
                if(b+arr[i]<=a)
           {
             ct++;
            b--;
           }
           else{
            if(a-arr[i]>1 )
            {   ct=ct+(b-(a-arr[i]));
                b=a-arr[i];
            }
            else{
                ct=ct+(b-1);
                b=1;
            }
            
           }
            }
            
        }
        cout<< ct+b<< endl;
    }
    return 0;
}