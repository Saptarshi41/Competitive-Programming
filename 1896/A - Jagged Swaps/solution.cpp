#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int n;
        cin>>n;
        int arr[n];
      
        for(int p=0;p<n;p++)
        {
            cin>>arr[p];
        }
        
        if(arr[0]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
 
    }
}