#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=1;
        int ct=0;
        for(int i=0;i<s.length();i++)
        {   if(s[i]=='0')
            {
                
                ct=ct+abs(a-10)+1;
            a=10;
            }
            else
            {
                ct=ct+abs(a-int(s[i])+48)+1;
            a=int(s[i])-48;
            }
        }
        cout<<ct<<endl;
    }
}