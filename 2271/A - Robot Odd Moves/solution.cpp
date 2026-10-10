#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        
        if(b>a+1)
            cout<<-1<<endl;
        else
        {
            if(b%2!=0)
            {
                if(a%2==0)
                    cout<<a+1<<endl;
                else
                    cout<<a<<endl;
            }
            else
            {
                if(a%2==0)
                    cout<<a<<endl;
                else
                    cout<<a+1<<endl;
            }
        }
    }
}