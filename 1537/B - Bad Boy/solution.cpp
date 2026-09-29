#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        if(n==i || m==j || i==1 || j==1)
        {
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        }
        else{
            int p,q,r,s;
            if(abs(i-1)<abs(n-i))
                p=n;
            else
                p=1;
            if(abs(j-1)<abs(m-i))
                q=1;
            else
                q=m;
            if(p==n && q==m)
                cout<<1<<" "<<1<<" "<<p<<" "<<q<<endl;
            else if(p==1 && q==1)
                cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            else
                cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
        }
    }
}