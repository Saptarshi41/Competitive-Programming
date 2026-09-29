#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0;
        bool t=true;
        while(s.length()>0 && t==true)
        {   
            for(int i=0;i<s.length()-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    s.erase(i,2);
                    a++;
                    break;
                }
            }
            t=false;
            for(int i=0;i<s.length()-1;i++)
            {
               if(s[i]!=s[i+1])
                {
                    t=true;
                    break;
                } 
            }
        }
        
        if(a%2==0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }
}