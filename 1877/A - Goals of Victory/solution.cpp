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
        int arr[n];
        for(int j=0;j<n-1;j++)
        {
            cin>>arr[j];
        }
        int sum=0;
        for(int j=0;j<n-1;j++)
        {
            sum=sum+arr[j];
        }
        cout<<(-sum)<<endl;
    }
}