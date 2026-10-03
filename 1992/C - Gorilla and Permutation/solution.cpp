#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> ans;
        for(int i=n;i>m;i--)
            ans.push_back(i);
        
        for(int i=1;i<=m;i++)
            ans.push_back(i);
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"
";
    }
    
}