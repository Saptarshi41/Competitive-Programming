#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n;
        vector<int> arr(n);
        vector<int>b;
        vector<int>c;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
    int min_ele=*min_element(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i] == min_ele)
        {
            b.push_back(arr[i]);
        }
    else
    {
        c.push_back(arr[i]);
    }
}
int s1=b.size();
int s2=c.size();
if(s1 == 0 || s2 == 0)
cout << -1 << endl;
else
{
    cout << s1 <<" ";
    cout<<s2<<endl;
    for(int i=0;i<s1;i++)
    {
        if(i == s1-1)
        cout << b[i] << endl;
        else
        cout << b[i] << " ";
    }
for(int i=0;i<s2;i++)
{
    if(i == s2-1)
    cout << c[i] << endl;
    else
    cout << c[i] << " ";
}
}
}
return 0;
}