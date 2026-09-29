#include <iostream>
using namespace std;
 
int main() {
 
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,xk,yk,xq,yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        int ct=0;
        if((xk-a == xq-a && yk-b == yq-b) || (xk-a == xq+a && yk-b == yq+b) || (xk-a == xq-a && yk-b == yq+b) || (xk-a == xq+a && yk-b == yq-b) || (xk-a == xq-b && yk-b == yq-a) || (xk-a == xq+b && yk-b == yq+a) || (xk-a == xq-b && yk-b == yq+a) || (xk-a == xq+b && yk-b == yq-a))
            ct++;
        if((xk+a == xq-a && yk+b == yq-b) || (xk+a == xq+a && yk+b == yq+b) || (xk+a == xq-a && yk+b == yq+b) || (xk+a == xq+a && yk+b == yq-b) || (xk+a == xq-b && yk+b == yq-a) || (xk+a == xq+b && yk+b == yq+a) || (xk+a == xq-b && yk+b == yq+a) || (xk+a == xq+b && yk+b == yq-a))
            ct++;
        if((xk-a == xq-a && yk+b == yq-b) || (xk-a == xq+a && yk+b == yq+b) || (xk-a == xq-a && yk+b == yq+b) || (xk-a == xq+a && yk+b == yq-b) || (xk-a == xq-b&& yk+b == yq-a) || (xk-a == xq+b && yk+b == yq+a) || (xk-a == xq-b && yk+b == yq+a) || (xk-a == xq+b && yk+b == yq-a))
            ct++;
        if((xk+a == xq-a && yk-b == yq-b) || (xk+a == xq+a && yk-b == yq+b) || (xk+a == xq-a && yk-b == yq+b) || (xk+a == xq+a && yk-b == yq-b) ||(xk+a == xq-b&& yk-b == yq-a) || (xk+a == xq+b && yk-b == yq+a) || (xk+a == xq-b && yk-b == yq+a) || (xk+a == xq+b && yk-b == yq-a))
            ct++;
        if(a!=b)
        { 
            if((xk-b == xq-a && yk-a == yq-b) || (xk-b == xq+a && yk-a == yq+b) || (xk-b == xq-a && yk-a == yq+b) || (xk-b == xq+a && yk-a == yq-b) || (xk-b == xq-b && yk-a== yq-a) || (xk-b == xq+b && yk-a == yq+a) || (xk-b == xq-b && yk-a == yq+a) || (xk-b == xq+b && yk-a == yq-a))
                ct++;
            if((xk+b == xq-a && yk+a == yq-b) || (xk+b == xq+a && yk+a == yq+b) || (xk+b == xq-a && yk+a == yq+b) || (xk+b == xq+a && yk+a == yq-b) || (xk+b == xq-b && yk+a == yq-a) || (xk+b == xq+b && yk+a == yq+a) || (xk+b == xq-b && yk+a == yq+a) || (xk+b == xq+b && yk+a == yq-a))
                ct++;
            if((xk-b == xq-a && yk+a == yq-b) || (xk-b == xq+a && yk+a == yq+b) || (xk-b == xq-a && yk+a == yq+b) || (xk-b == xq+a && yk+a == yq-b) || (xk-b == xq-b && yk+a== yq-a) || (xk-b == xq+b && yk+a == yq+a) || (xk-b == xq-b && yk+a == yq+a) || (xk-b == xq+b && yk+a == yq-a))
                ct++;
            if((xk+b == xq-a && yk-a == yq-b) || (xk+b == xq+a && yk-a == yq+b) || (xk+b == xq-a && yk-a == yq+b) || (xk+b == xq+a && yk-a == yq-b) || (xk+b == xq-b && yk-a == yq-a) || (xk+b == xq+b && yk-a == yq+a) || (xk+b == xq-b && yk-a == yq+a) || (xk+b == xq+b && yk-a == yq-a))
                ct++;
        }
        
        cout<< ct<<endl;
    }
return 0;
}