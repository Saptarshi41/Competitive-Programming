#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n,a;
        cin >> n >> a;
        int arr[n];
        int c=0,s=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
 
        }
    for(int i=0;i<n;i++)
    {
        if(a > arr[i] )
        c++;
        else if(a==arr[i])
            continue;
        else
        {
 
            s++;
        }
}
 
if(s > c)
cout << a+1 << endl;
else
cout << a-1 << endl;
}
return 0;
}