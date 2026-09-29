#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int i=n.length()-1;
        int ct=0;
        while(i>=0)
        {
            if(n[i]=='5' || n[i]=='0')
            {
                break;
            }
            else
            {
                n.erase(i,1);
                ct++;
                i--;
            }
        }
        
     
        
            int ind1=30;
            bool t=true;
            int ind2=0;
           for(int j=n.length()-1;j>=0;j--)
           {
            if(n[j]=='5')
            {
                for(int k=j-1;k>=0;k--)
            {
                if(n[k]=='2' || n[k]=='7')
                {   if(j-k-j<ind1-ind2-ind1)
                    {
                        ind1=j;
                    ind2=k;
                    break;
                    }
                    
                }
            }
            }
             if(n[j]=='0')
            {
                   for(int k=j-1;k>=0;k--)
            {
                if(n[k]=='0' || n[k]=='5')
                {
                   if((j-k-j)<(ind1-ind2-ind1))
                    {
                        ind1=j;
                    ind2=k;
                    break;
                    }
                }
            }
            }
            
           }
        
           cout<<ct+(ind1-ind2-1)+(n.length()-1-ind1)<<endl;
        
    
 
    }
}