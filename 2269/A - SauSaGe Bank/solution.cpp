#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        
        cout<<int(pow(2,n-(k-1)))+2*(k-1)<<endl;
 
 
    }
}