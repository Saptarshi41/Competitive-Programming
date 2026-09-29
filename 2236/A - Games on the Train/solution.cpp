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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min=*min_element(arr.begin(),arr.end());
        int max=*max_element(arr.begin(),arr.end());
        cout<<max+1-min<<endl;
    }
}