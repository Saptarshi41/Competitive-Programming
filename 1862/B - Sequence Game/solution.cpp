#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int>ans;
        for(int j=0;j<n;j++)
        {
            cin>>v[j];
        }
        ans.push_back(v[0]);
        for(int j=1;j<n;j++)
        {
            if (v[j]>=v[j-1])
                ans.push_back(v[j]);
            else
            {
                ans.push_back(v[j]);
                ans.push_back(v[j]);
            }        
        }
        cout<<ans.size()<<endl;
        for(int j=0;j<ans.size();j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
}