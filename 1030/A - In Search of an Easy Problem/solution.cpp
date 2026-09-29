#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool b=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            b=true;
    }
    if(b==true)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
 
}