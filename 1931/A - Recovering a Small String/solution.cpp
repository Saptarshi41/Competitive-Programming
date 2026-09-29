#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=28)
        {   char c=char(97+n-3);
              string s="";
              s+='a';
              s+='a';
              s+=c;
            cout<<s<<endl;
        }
        else if(n>28 && n<=53)
        {   char c=char(97+n-28);
            string s="";
             s+='a';
             s+=c;
              s+='z';
            cout<<s<<endl;
        }
        else{
            char c=char(97+n-53);
            string s="";
            s+=c;
              s+='z';
              s+='z';
              
            cout<<s<<endl;
        }
    }
}