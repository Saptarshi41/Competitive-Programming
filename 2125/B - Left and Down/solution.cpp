#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k,c,e,f;
        cin>>a>>b>>k;
        e=a;
        f=b;
       while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
        if(e/a<=k && f/a<=k)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}