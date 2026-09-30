#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        double x=a/double(n);
        
        if(x<b && a>b )
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
}