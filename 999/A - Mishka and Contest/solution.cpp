#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    int ct=0;
    while(i<=j)
    {
        if(arr[i]<=k && i!=j)
        {
            ct++;
            i++;
        }
        if(arr[j]<=k )
        {
            ct++;
            j--;
        }
        if(arr[i]>k && arr[j]>k)
            break;
    }
    cout<<ct<<endl;
}