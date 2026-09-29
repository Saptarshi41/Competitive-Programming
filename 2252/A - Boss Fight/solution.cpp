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
        int sum=0;
        vector <int> arr(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int m=*max_element(arr.begin(),arr.end());
        vector<int> store(m+1,0);
        for(int i=0;i<n;i++)
        {
            store[arr[i]]++;
        }
        int x=*max_element(store.begin(),store.end());
        int ind;
        for(int i=0;i<m+1;i++)
        {
            if(store[i]==x)
                ind=i;
        }
        sum=sum-ind*x;
        if(x==n)
        {
            if(n==1)
                cout<<ind<<endl;
            else
                cout<< ind*2<<endl;
        }
        else{
            sort(store.begin(),store.end());
            int y=store[m-1];
            int s1=0;
               
                for(int i=0;i<m;i++)
                {
                    s1=s1+store[i];
                }
                if(s1+2>=x)
                    sum=sum+x*ind;
                else
                    sum=sum+(s1+2)*ind;
                cout<<sum<<endl;
            
            
        }
    }
    return 0;
}