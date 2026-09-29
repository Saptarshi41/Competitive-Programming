#include <iostream>
using namespace std;
 
int mygcd(int x, int y) {
    while (y != 0) {
        int z = x % y;
        x = y;
        y = z;
    }
    return x;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
 
        int g1 = mygcd(n, a);
        int g2 = mygcd(m, b);
       int g3 = mygcd(n, m);
 
        if (g1 == 1 && g2 == 1 && (g3 == 1 || g3 == 2)) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}