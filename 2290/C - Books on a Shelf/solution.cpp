#include<iostream>
#include<map>
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
       map<int,int>m;
       for(int i=0;i<n;i++)
       {
        int a;
        cin>>a;
        m[a]++;
       }
       int sum=0;
       for(auto it:m)
       {
            if(it.second>2)
                sum=sum+2;
            else
                sum=sum+it.second;
       }
       cout<<sum<<endl;
       vector<int> arr(n);
       vector<int> extra;
       int i=0;
       int j=n-1;
       for(auto it:m)
       {
        int no=it.first;
        int ct=it.second;
        arr[i]=no;
        i++;
        if(ct>=2)
        {
            arr[j]=no;
            j--;
        }
        for(int c=3;c<=ct;c++)
            extra.push_back(no);
       }
       for(int x:extra)
       {
        arr[i]=x;
        i++;
       }
       for(int k=0;k<n;k++)
       {
        cout<<arr[k]<<" ";
       }
       cout<<endl;
    }
}