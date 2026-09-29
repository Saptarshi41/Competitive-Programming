#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y,z;
        x=b;
        y=c;
        if(b+c>d)
            z=d;
        else
        {
            int p=d-(b+c);
            z=d-p-1;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}