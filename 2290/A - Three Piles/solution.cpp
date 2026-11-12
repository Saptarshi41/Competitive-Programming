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
        int ma=max({a,b,c});
        int mi=min({a,b,c});
        int mid=(a+b+c)-mi-ma;
        if(mi+1==mid && ma-1==mid)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}