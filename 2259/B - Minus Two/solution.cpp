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
        int ct1=0,ct2=0,ct3=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
                ct1++;
            else
            {
                if((arr[i]/2)%2==0)
                    ct2++;
                else
                    ct3++;
            }
        }
        cout<<max({ct1,ct2,ct3})<<endl;
    }
}