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
        int ct1=0;
        int ct2=0;
        int store1=0;
        int store2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='>')
                ct1++;
            else
            {
                store1=max(ct1,store1);
                ct1=0;
            }
        }
        store1=max(ct1,store1);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<')
                ct2++;
            else
            {
                store2=max(ct2,store2);
                ct2=0;
            }
        }
        store2=max(ct2,store2);
        int store=max(store1,store2);
        cout<< store+1<<endl;
    }
    return 0;
}