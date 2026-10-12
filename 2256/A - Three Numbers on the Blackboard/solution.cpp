#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int e=max({a,b,c});
        int f=min({a,b,c});
        if(a+b+c-e>e)
            cout<<e-f<<endl;
        else
            cout<<(a+b+c-e)-f<<endl;
    }
}