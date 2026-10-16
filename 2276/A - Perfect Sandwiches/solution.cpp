#include<iostream>
using namespace std;
long long gcd(long long a,long long b) {
    if (b==0) 
        return a;
    return gcd(b,a%b); 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a<=b)
            cout<<-1<<endl;
        else
        {
            cout<<min(b,a-b)<<endl;
        }
    }
}