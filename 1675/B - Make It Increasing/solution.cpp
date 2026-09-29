#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ct=0;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool t=true;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i+1]>arr[i])
                continue;
            else{
                if(arr[i+1]!=0)
                {
                    int c=arr[i]/arr[i+1];
                int d=log2(c);
                d+=1;
                arr[i]=int(arr[i]/pow(2,d));
                
                
                ct+=d;
                }
                else
                {
                    t=false;
                    break;
                }
                
            }
        }
        if(t==false)
            cout<< -1<<endl;
        else
            cout<<ct<<endl;  
    }
}