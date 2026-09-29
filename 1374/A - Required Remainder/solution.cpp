#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long a=k/x;
        
        if(y<=k%x)
            cout<<a*x+y<<endl;
        else
            cout<<(a-1)*x+y<<endl;
    }
}