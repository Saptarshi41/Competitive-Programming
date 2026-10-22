#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<n<<" ";
        for(int i=1;i<=n-1;i++)
            cout<<i<<" ";
        cout<<endl;
    }
}