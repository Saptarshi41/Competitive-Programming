#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int m=max({a,b,c});
        m=3*m-(a+b+c);
        n=n-m;
        if(n%3==0 && n>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}