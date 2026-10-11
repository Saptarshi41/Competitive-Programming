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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>store;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==i+1)
                continue;
            else
                store.push_back(arr[i]);
        }
        ;
        bool t=true;
        for(int i=1;i<store.size();i++)
        {
            if(store[i]<store[i-1])
                continue;
            else{
                t=false;
                break;
            }
        }
        if(t==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}