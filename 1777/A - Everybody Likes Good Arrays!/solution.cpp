#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        cin >> arr[i];
        int i=0;
        int op=0;
        while(i<arr.size()-1)
        {
            if((arr[i]+arr[i+1])%2==0)
            {
                arr[i]=arr[i]*arr[i+1];
                arr.erase(arr.begin()+(i+1));
                i=0;
                op++;
            }
            else
                i++;
            
        }
        cout<< op<<endl;
}
return 0;
}