#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        vector <int> v(7);
        for(int j=0;j<7;j++)
        {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int k=0;k<6;k++)
        {
            v[k]= -v[k];
            sum=sum+v[k];
 
        }
        cout<<(sum+v[6])<<endl;
 
    }
}