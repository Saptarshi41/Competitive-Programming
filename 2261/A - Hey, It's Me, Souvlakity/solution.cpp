#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        int x,y;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='1')
            {
                x=i;
                break;
            }
        }
        int ct=0;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='1')
            {
                y=i;
               ct++;
            }
        }
        if(ct==2)
            cout<<1<<endl;
        else
            cout<<y-x<<endl;
    }
}