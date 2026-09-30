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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m=*max_element(arr.begin(),arr.end());
        vector<int>store(m+1,0);
        for(int i=0;i<n;i++)
        {
            store[arr[i]]++;
        }
        for(int i=m;i>=0;i--)
        {   if(store[i]<=0)
                continue;
            for(int k=0;k<store[i];k++)
                    cout<<i<<" ";
            for(int j=i-1;j>=0;j--)
            {
                if(store[j]<=store[i] )
                {
                    for(int k=0;k<store[j];k++)
                    cout<<j<<" ";
                }
                else
                {
                    for(int k=0;k<store[i];k++)
                    cout<<j<<" ";
                }
                store[j]=store[j]-store[i];
            }
            
        } 
        cout<<"
";      
    } 
}