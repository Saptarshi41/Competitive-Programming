#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string x;
        string r;
        vector<char> s;
        vector<char> abr;
        vector<string> store;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            s.push_back(x[0]);
        }
    for(int i=0;i<m;i++)
    {
        cin >> r;
        for (char c : r) {
            abr.push_back(c);
        }
}
bool y=true;
int p=0;
for(int i=0;i<abr.size();i++)
{
    for(int j=0;j<n;j++)
    {
        if(tolower(abr[i]) == s[j])
        p++;
 
    }
if(p == 0)
{
    y=false;
    break;
}
p=0;
}
if(y == false)
cout << "no" << endl;
else
cout << "yes" << endl;
 
}
return 0;
}