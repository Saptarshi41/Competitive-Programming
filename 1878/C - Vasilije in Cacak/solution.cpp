#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t = 1;
    cin >> t;
    while (t--) {
        long long n,k,x;
        cin >> n >> k >> x;
        if(x>(n*(n+1)/2))
        cout << "no" << endl;
        else
        {
            if(x<(k*(k+1)/2))
            cout << "no" << endl;
            else
            {    long long a=n-k;
                if(x>((n*(n+1)/2)-(a*(a+1)/2)))
                cout << "no" << endl;
                else
                cout << "yes" << endl;
            }
    }
}
return 0;
}