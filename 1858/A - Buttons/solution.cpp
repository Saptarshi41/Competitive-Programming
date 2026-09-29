#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        long long a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(c%2!=0)
        {
            if(a+1>b)
                cout<<"First"<<endl;
           
            else
                cout<<"Second"<<endl;
        }
        else
        {
              
            if(a>b)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
    }
}