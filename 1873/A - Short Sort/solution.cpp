#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        string x;
        cin>>x;
        if(x=="abc")
        cout<<"YES"<<endl;
        if(x=="acb")
        cout<<"YES"<<endl;
        if(x=="bca")
        cout<<"NO"<<endl;
        if(x=="bac")
        cout<<"YES"<<endl;
        if(x=="cab")
        cout<<"NO"<<endl;
        if(x=="cba")
        cout<<"YES"<<endl;
    }
}