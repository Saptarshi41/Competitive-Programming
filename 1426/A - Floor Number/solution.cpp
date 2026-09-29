#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else{
            int a=(n-2)/x+1;
        if(n>=(a-2)*x+3 && n<=(a-1)*x+2)
            cout<<a<<endl;
        else
            cout<<a+1<<endl;
        }
       
    }
}