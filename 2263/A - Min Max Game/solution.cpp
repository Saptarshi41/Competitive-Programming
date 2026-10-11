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
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                zero++;
            else
                one++;
        }
        if(one>=zero)
            cout<<"Bessie"<<endl;
        else
            cout<<"Elsie"<<endl;
    }
}