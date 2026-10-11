#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long> arr;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        long long score=0;
        while(arr.size()>=k)
        {
            int a=k-1;
            int b=arr.size()-k;
            if(arr[a]>arr[b])
            {
                score=score+arr[a];
                arr.erase(arr.begin()+a);
            }
            else
            {
                score=score+arr[b];
                arr.erase(arr.begin()+b);
            }
        }
        cout<<score<<endl;
    }
}