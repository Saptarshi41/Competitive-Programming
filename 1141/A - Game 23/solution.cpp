#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if(m%n==0)
    {
        long long a=m/n;
        int ct=0;
        while(true)
        {
            if(a%2!=0)
                break;
            else
            {
                a=a/2;
                ct++;
            }
        }
        while(true)
        {
            if(a%3!=0)
                break;
            else
            {
                a=a/3;
                ct++;
            }
        }
        if(n==1 && ct==0 && m!=1 )
        cout<<-1<<endl;
        else
        {
            if(a==1)
            cout<<ct<<endl;
            else
            cout<<-1<<endl;
        }
    }
    else
        cout<<-1<<endl;
}