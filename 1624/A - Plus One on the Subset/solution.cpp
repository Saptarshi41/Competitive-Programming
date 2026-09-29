#include<iostream>
#include<algorithm>
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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=*max_element(arr.begin(),arr.end());
        int b=*min_element(arr.begin(),arr.end());
        cout<<a-b<<endl;
    }
}