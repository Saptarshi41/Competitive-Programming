#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int i=0;
        int j=n-1;
        int ct=0;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                if(s[i]==c || s[j]==c)
                    ct++;
                else
                    ct=ct+2;
                i++;
                j--;
            }
            
        }
        cout<<ct<<endl;
    }
}