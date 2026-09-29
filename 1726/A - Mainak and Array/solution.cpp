#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ma=*max_element(arr.begin(),arr.end());
        int mi=*min_element(arr.begin(),arr.end());
        
        if(arr[n-1]==ma)
            cout<<ma-mi<<endl;
        else if(arr[0]==mi)
            cout<<ma-mi<<endl;
        else
        {   
            int c=max(ma-arr[0],arr[n-1]-mi);
            for(int i=1;i<n;i++)
            {
                c=max(c,arr[i-1]-arr[i]);
            }
            cout<<c<<endl;
        }
    }
}