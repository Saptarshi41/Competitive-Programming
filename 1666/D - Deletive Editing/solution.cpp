#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int v;
    cin>>v;
    while(v--)
    {
        string s,t;
        cin>>s>>t;
        int n1=s.length();
        int n2=t.length();
        bool g=true;
        if(n2>n1)
        cout<<"NO"<<endl;
        else
        {   vector<int> xd(91,0);
            for(int i=0;i<n2;i++)
            {
                xd[int(t[i])]++;
            }
            
            int z=0;
            for(int i=0;i<xd.size();i++)
            {   
                z=0;
                if(xd[i]==0)
                    continue;
                else
                {
                    for(int j=0;j<n1;j++)
                    {
                        if(char(i)==s[j])
                            z++;
                            
                    }
                    
                    if(z<xd[i])
                    {
                        g=false;
                        break;
                    }
                }
                
            }
        if(g==true)
        {
             vector<int>store(n2,0);
        int ct=0;
        for(int i=n2-1;i>=0;i--)
        {   
            for(int j=n1-1;j>=0;j--)
            {
                if(i==n2-1)
                {
                    if(t[i]==s[j])
                    {
                         store[ct]=(j);
                         break;
                    }
                }
                else{
                    if(t[i]==s[j] && j<store[ct])
                    {   
                        store[ct+1]=(j);
                        ct++;
                        break;
                    }
                }
            }
            
        }
       
        
        reverse(store.begin(),store.end());
        bool f=true;
        for(int i=1;i<n2;i++)
        {
            if(store[i]==store[i-1])
            {
                f=false;
                break;
            }
        }
        if(f==true)
        {
            bool x=true;
        for(int i=0;i<n2;i++)
        {
            int p=n1;
            for(int k=i+1;k<n2;k++)
            {
                if(t[i]==t[k])
                {
                    p=store[k];
                    break;
                }
            }
            for(int j=store[i]+1;j<p;j++)
            {
                if(s[j]==t[i])
                {
                    x=false;
                    break;
                }
                if(x==false)
                    break;
            }
        }
        if(x==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }
        
        
        }
       
    
}