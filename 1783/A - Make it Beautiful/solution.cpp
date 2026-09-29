#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
    if(n == 2)
    {
        if(arr[0] == arr[1])
        cout << "no" << endl;
        else
        {
            cout << "yes" << endl;
            cout << arr[0] << " ";
            cout << arr[1] << endl;
        }
}
else
 
{
    bool t=false;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[i-1])
        {
            t=true;
            break;
        }
}
if(t == false)
cout << "no" << endl;
else
 
{
    cout << "yes" << endl;
    cout << arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cout << " " << arr[i];
    }
cout << endl;}
 
}
}
return 0;
}