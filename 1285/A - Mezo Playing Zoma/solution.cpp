#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
            l--;
        else
            r++;
    }
    cout<<(r-l)+1<<endl;
}