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
        if(abs(a+c-b)>abs(a-b))
            cout<<abs(a+c-b)<<endl;
        else
            cout<<abs(a-b)<<endl;
    }
}