#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x;
        cin >> s;
        int ct=0;
 
        while(x.size() <= s.size())
        {  if(s == x)
            break;
            x=x+x;
            ct++;
        }
    n=x.size();
    string store;
    bool y=true;
    for(int i=0;i <= n-m;i++)
    {
        store=x.substr(i,m);
        if(store == s)
        {
            y=false;
            break;
        }
}
if(y == true)
{
    x=x+x;
    ct++;
    n=x.size();
    bool y=true;
    for(int i=0;i <= n-m;i++)
    {
        store=x.substr(i,m);
        if(store == s)
        {
            y=false;
            break;
        }
}
if(y==true)
    cout<< -1<<endl;
else
    cout<< ct<<endl;
}
else
cout << ct << endl;
}
return 0;
}