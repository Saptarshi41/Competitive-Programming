#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        int ct=0;
        for(int i=0;i<s.length();i=i+k)
        {   bool t=true;
            string x=s.substr(i,k);
            for(int j=0;j<x.length();j++)
            {
                if(x[j]=='0')
                    t=false;
            }
           
            if(t==true)
                ct++;
        }
        cout<<ct<<endl;
    }
}