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
        int x=2*b-c;
        int y=(a+c);
        int z=2*b-a;
        if(x%a==0 && x/a>0)
            cout<<"YES"<<endl;
        else if(y%2==0 && (y/2)%b==0 && (y/2)/b>0)
        {
            cout<<"YES"<<endl;
        }
        else if(z%c==0 && z/c>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}