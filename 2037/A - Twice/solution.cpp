#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            m[a]++;
 
        }
        int sum=0;
        for(auto it:m)
        {
            if(it.second>=2)
            {
                sum=sum+it.second/2;
            }
        }
        cout<<sum<<endl;
    }
}