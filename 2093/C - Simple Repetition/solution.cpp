#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ct=0;
        if(n==1 && k!=2)
            cout<<"NO"<<endl;
        else if(n==1 && k==2)
            cout<<"YES"<<endl;
        else{
            for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
                ct++;
        }
        if(ct==1 && k==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}