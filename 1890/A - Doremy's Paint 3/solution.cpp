#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int n;
        cin>>n;
        vector <int> v(n);
        vector <int> s;
        for(int k=0;k<n;k++)
        {
            cin>>v[k];
        }
        if(n<=2)
        cout<<"Yes"<<endl;
        else
        {   sort(v.begin(),v.end());
            for(int j=0;j<n;j++)
            {
                if(j==0 || v[j]!=v[j-1])
                    s.push_back(v[j]);
            }
            if(s.size()==1)
            cout<<"Yes"<<endl;
            else if(s.size()==2)
            {
                if(n%2==0)
            {   int x=0,y=0;
                for(int r=0;r<n;r++)
                    {
                        if(v[r]==s[0])
                            x++;
                        else
                            y++;
                    }
                if(x==y)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            }
            else 
            {
               {   int x=0,y=0;
                for(int r=0;r<n;r++)
                    {
                        if(v[r]==s[0])
                            x++;
                        else
                            y++;
                    }
                if(x==y+1 || y==x+1)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            } 
            }
            }
             
            else
            cout<<"No"<<endl;
        }
    }
}