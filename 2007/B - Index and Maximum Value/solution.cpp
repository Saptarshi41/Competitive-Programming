#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max_val=*max_element(arr.begin(),arr.end());
        while(m--)
        {
           char op;
           int l,r;
           cin>>op>>l>>r;
            if(op=='+' && max_val>=l && max_val<=r)
            {
                max_val++;
            }
            if(op=='-' && max_val>=l && max_val<=r)
            {
                max_val--;
            }
            cout<<max_val<<" ";
        }
        cout<<"
";
    }
}