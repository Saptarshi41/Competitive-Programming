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
        if(n%2!=0)
            cout<< -1<<endl;
        else{
            if(n>=4)
            {
                 long long min,max;
            max=n/4;
            if(n%6==0)
                min=n/6;
            else if(n%6==4)
                min=(n/6)+1;
            else
            {
                long long a=(n/6)-1;
                long long b=(n-6*a)/4;
                min=a+b;
                
            }
            cout<<min<<" "<<max<<endl;
            }
            else
                cout<< -1<<endl;
           
        }
    }
}