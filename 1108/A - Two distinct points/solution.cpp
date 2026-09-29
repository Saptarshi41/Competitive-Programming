#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1!=r2)
        cout<<l1<<" "<<r2<<endl;
       else
        cout<<l1<<" "<<r2-1<<endl;
    }
}