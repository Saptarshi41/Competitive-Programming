#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int gap=INT_MAX;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<n-1;j++)
        {
            if((arr[j+1]-arr[j])<gap)
                gap=arr[j+1]-arr[j];
            if((arr[j+1]-arr[j])<0)
            {
                gap=INT_MAX;
                break;
            }
        }
       if(gap==INT_MAX)
           cout<<0<<endl;
       else
           cout<<(gap/2)+1<<endl;
    }
}