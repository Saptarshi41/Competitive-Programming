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
        int one=0,zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        if(one==zero)
            cout<<0<<endl;
        else
        {
            int a=max(one,zero)-min(one,zero);
            int n=s.length()-a;
            int x=0,y=0;
             for(int i=0;i<n;i++)
            {
            if(s[i]=='0')
                x++;
            else
                y++;
            }
            if(x==y)
                cout<<a<<endl;
            else
            {
                if(y>x)
                {
                    int b=y-min(one,zero);
                    int ct=0;
                    for(int i=n-1;i>=0;i--){
                        if(s[i]=='1'){
                            ct++;
                            b--;
                        }
                        else
                            ct++;
                        if(b==0)
                                break;
                    }
                    cout<<a+ct<<endl;
                }
                else
                {
                    int b=x-min(one,zero);
                    int ct=0;
                    for(int i=n-1;i>=0;i--){
                        if(s[i]=='0'){
                            ct++;
                            b--;
                        }
                        else
                            ct++;
                        if(b==0)
                                break;
                    }
                    cout<<a+ct<<endl;
                }
            }
        }
    }
}