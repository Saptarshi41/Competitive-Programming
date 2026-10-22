#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b>a)
            cout<<2<<endl;
        else
        {
            if(b<a-1 && b!=1)
                cout<<3<<endl;
            else
                cout<<-1<<endl;
        }
    }
}