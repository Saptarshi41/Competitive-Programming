#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a=log2(n);
        if(pow(2,a)==n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}