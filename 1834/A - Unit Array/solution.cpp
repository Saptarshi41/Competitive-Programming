#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
 
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        int neg_count=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum=sum+arr[i];
            if(arr[i] == -1)
            neg_count += 1;
        }
        if(sum<0)
        {  int op=ceil(abs(sum)/2.0);
            if(abs(neg_count-op)%2 == 0)
                cout << op << endl;
            else
                cout << op+1 << endl;
        }
        else
        {
            if((neg_count)%2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        
        }
    return 0;
}