#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int sum;
        sum=a+b+c;
        int x=n/sum;
        int rem=n-x*sum;
        if(rem==0)
            cout<<x*3<<endl;
        else
        {
            if(rem<=a)
            cout<<x*3+1<<endl;
        else if(rem>a && rem<=a+b)
            cout<<x*3+2<<endl;
            else
                cout<<x*3+3<<endl;
        }
        
        
        
    }
    return 0;
}