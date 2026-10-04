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
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long low=0;
        long long high=0;
        long long op=low*arr[0]+(n-high-1)*arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
                high=i;
            else{
                op=min(op,(low*arr[i-1]+(n-high-1)*arr[i-1]));
                low=i;
                high=i;
            }
        }
        op=min(op,(low*arr[n-1]+(n-high-1)*arr[n-1]));
        cout<<op<<endl;
    }
}