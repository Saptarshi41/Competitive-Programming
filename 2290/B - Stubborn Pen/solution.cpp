#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        
        string s;
        
        cin>>n>>s;
        int ct=0;
        if(s[0]=='B')
            ct++;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                ct++;
               
        }
        cout<<ct<<endl;
    }
}