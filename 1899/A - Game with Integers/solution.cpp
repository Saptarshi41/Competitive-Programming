#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int n;
        cin>>n;
        if(n%3==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
}