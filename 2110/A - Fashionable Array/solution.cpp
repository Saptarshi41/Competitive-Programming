#include<iostream>
#include<algorithm>
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int m1=0;
        int m2=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if((arr[i]+arr[j])%2==0)
                break;
            else{
                m1++;
                i++;
            }
        }
        i=0;
        while(i<j)
        {
            if((arr[i]+arr[j])%2==0)
                break;
            else{
                m2++;
                j--;
            }
        }
        cout<<min(m1,m2)<<endl;
    }
}