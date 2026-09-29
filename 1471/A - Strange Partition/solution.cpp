#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        int arr[n];
        long long min=0;
        long long  max=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            min=min+arr[i];
            max=max+(ceil(arr[i]/double(x)));
            
        }
        long long m=ceil(min/double(x));
        cout<<m<<" "<<max<<endl;
    }
}