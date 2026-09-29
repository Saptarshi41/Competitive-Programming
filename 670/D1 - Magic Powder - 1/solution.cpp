#include<iostream>
#include<vector>
 
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    vector<int>store1;
    vector<int>store2;
    for(int i=0;i<n;i++)
    {
        if(arr2[i]%arr1[i]==0)
            store1.push_back(arr1[i]);
        else
            store1.push_back(arr1[i]-arr2[i]%arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        store2.push_back(arr2[i]/arr1[i]);
    }
    while(k>0)
    {
        int m=*min_element(store2.begin(),store2.end());
        for(int i=0;i<n;i++)
        {
            if(k<=0)
                break;
            if(store2[i]==m)
            {   if(k-store1[i]>=0)
                {
                    k=k-store1[i];
                store1[i]=arr1[i];
                store2[i]++;
                }
                else
                    k=k-store1[i];
            }
 
        }
    }
    cout<<*min_element(store2.begin(),store2.end())<<endl;
}