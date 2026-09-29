#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int n,x;
        cin>>n;
        cin>>x;
        vector <int> v(n);
        for(int j=0;j<n;j++)
        {
            
            cin>>v[j];
            
        }
        if(n>=2)
        {   int z=v[0];
            for(int k=0;k<n-1;k++)
            {
                if((v[k+1]-v[k])>z)
                    z=v[k+1]-v[k];
            }
            if(z>=(2*(x-v[n-1])))
                cout<<z<<endl;
            else
                cout<<(2*(x-v[n-1]))<<endl;
        }
        else
            {
            if((v[n-1])>=2*(x-v[n-1]))
            cout<<v[n-1]<<endl;
            else
            cout<< 2*(x-v[n-1])<<endl;
            }
 
    }
}