#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long c=abs(a-b);
        if(c==0)
            cout<<c<<" "<<0<<endl;
        else if(c==1)
            cout<<c<<" "<<0<<endl;
        else
        {
            long long d=a/c;
            long long m=min(abs(c*d-a),abs(c*(d+1)-a));
            cout<<c<<" "<<m<<endl;
        }
    }
}