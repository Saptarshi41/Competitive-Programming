#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=n-k;
        int mi=*min_element(arr.begin()+a+1,arr.end());
        int ind1=-1;
        for(int i=0;i<n;i++)
        {
            if(mi==arr[i])
            {
                ind1=i+1;
                break;
            }
        }
        int ind2=-1;
        for(int i=0;i<n-k+1;i++)
        {
            if(arr[i]>a)
            {
                ind2=i+1;
            }
        }
        if(ind2==-1)
            cout<<-1<<endl;
        else
        {
            cout<<ind2<<" "<<ind1<<endl;
        }
    }
}