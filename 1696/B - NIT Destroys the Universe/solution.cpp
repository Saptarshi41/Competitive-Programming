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
        vector<int> store;
        vector<int>final;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                store.push_back(i);
        }
        if(store.size()==0)
        cout<<1<<endl;
        if(store.size()==n)
        cout<<0<<endl;
        if(store.size()>0 && store.size()<n){
            final.push_back(store[0]);
         for(int i=1;i<store.size();i++)
            {
                if(store[i]-store[i-1]!=1)
                    final.push_back(store[i]);
            }
        if(store[store.size()-1]==n-1)
            final[final.size()-1]=store[store.size()-1];
           
 
        if(final.size()==0)
            cout<<1<<endl;
        
        else if(final.size()==1 )
        {
            if((final[0]==0 || final[0]==n-1))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        
       else if(final.size()==2)
       {
        if((final[0]==0 && final[1]==n-1))
                cout<<1<<endl;
            else
                cout<<2<<endl;
       }
       else
        cout<<2<<endl;
        }
        
    }
    return 0;
}