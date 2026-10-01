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
        string s;
        cin>>s;
        int ct=0;
        if(s[0]=='1')
        {
            for(int i=1;i<n;i++)
            {
                if(s[i]=='0')
                    ct++;
            }
        }
        else
        {   int rzero=0;
            int one=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                    rzero++;
            }
            ct=rzero;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                    rzero--;
                else
                    one++;
                if(rzero+one<ct && rzero+one>=0)
                    ct=rzero+one;
            }
        }
    cout<<ct<<endl;
}
}