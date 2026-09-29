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
        int a,b,c;
        cin>>a>>b>>c;
        a=n-a;
        b=n-b;
        c=n-c;
        int m=max({a,b,c});
        cout<<m<<endl;
    }
}