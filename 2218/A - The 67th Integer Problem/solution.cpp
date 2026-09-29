#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int x;
        cin>>x;
        if(x<67 )
        cout<<x+1<<endl;
        else if (x==67)
        {
           cout<<x<<endl;
        }
        
        
    }
}