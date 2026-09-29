#include<iostream>
using namespace std;
int main()
{
     int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            sum= sum+arr[j];
 
        }
 
        if(sum%2!=0 || (n*k)%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
}