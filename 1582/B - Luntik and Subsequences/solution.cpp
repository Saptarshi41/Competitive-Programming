#include<iostream>
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
        long long ct=0;
        long long cd=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                ct++;
            if(arr[i]==1)
                cd++;
        }
        long long x=(pow(2,ct)*cd);
        cout<<x<<endl;
    }
}