#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin >>x>>y>>k;
        long long d=y-x;
        long long ct=0;
        while(k>0 && x<=d) 
        {
            ct+=d%x;
            x++;
            k--;
        }
        if(k>0)
            cout<<ct+k*d<<endl;
        else
            cout<<ct<<endl;
    }
    
}