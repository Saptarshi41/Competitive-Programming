#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int c2=0;
        int c3=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                c2++;
            }
            else if(n%3==0)
            {
                n=n/3;
                c3++;
            }
            else
            {
                break;
            }
        }
        if(n!=1)
            cout<<-1<<endl;
        else
        {
            if(c2>c3)
                cout<<-1<<endl;
            else
            {
                cout<<(c3-c2)*2+c2<<endl;
            }
        }
    }
}