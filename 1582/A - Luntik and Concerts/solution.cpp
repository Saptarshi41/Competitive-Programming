#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long d=a+2*b+c*3;
        if(d%2==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
}