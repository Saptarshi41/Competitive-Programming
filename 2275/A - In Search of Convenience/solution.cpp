#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,r;
        cin>>x>>y>>r;
        long long a=x;
        long long b=y-r;
        cout<<a<<" "<<b<<endl;
    }
}