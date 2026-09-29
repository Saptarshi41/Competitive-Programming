#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        char arr[10][10];
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                cin>>arr[j][k];
            }
        }
        int sum=0;
        int p=1;
        for(int b=0;b<5;b++)
        {   
            for(int k=b;k<10-b;k++)
            {
                if(arr[b][k]=='X')
                sum=sum+p;
            }
            for(int k=b;k<10-b;k++)
            {
                if(arr[9-b][k]=='X')
                sum=sum+p;
            }
            for(int k=b+1;k<10-b-1;k++)
            {
                if(arr[k][9-b]=='X')
                sum=sum+p;
            }
            for(int k=b+1;k<10-b-1;k++)
            {
                if(arr[k][b]=='X')
                sum=sum+p;
            }
            p++;
        }
        cout<<sum<<endl;
    }
}