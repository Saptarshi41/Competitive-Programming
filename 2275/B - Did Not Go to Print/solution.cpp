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
        string s;
        cin>>n;
        cin>>s;
        vector<int>store;
        vector<int>store1;
        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='1')
            {
                store.push_back(i);
            }
            else if(s[i-1]=='2')
            {
                if(store.size()==0)
                    continue;
                else
                {
                    store.pop_back();
                    store1.push_back(i);
                }
            }
            else
            {
                continue;
            }
        }
        
        vector<int>result;
        set_union(store.begin(),store.end(),store1.begin(),store1.end(),back_inserter(result));
        cout<<result.size()<<endl;
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<"
";
    }
}