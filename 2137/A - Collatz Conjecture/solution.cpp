#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,x;
        cin>>k>>x;
        cout<<int(pow(2,k))*x<<endl;
    }
}