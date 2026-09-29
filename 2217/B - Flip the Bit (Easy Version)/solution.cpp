#include <iostream>
#include<vector>
using namespace std;
 
static int leftCost(const vector<int>& a, int p, int x) {
    // Left part: positions [0 .. p-2]
    // One operation toggles a suffix of this part (or nothing).
    if (p <= 1) return 0;
 
    int cost = (a[0] != x);
    for (int i = 1; i <= p - 2; i++) {
        int cur = (a[i] != x);
        int prev = (a[i - 1] != x);
        if (cur != prev) cost++;
    }
    return cost;
}
 
static int rightCost(const vector<int>& a, int p, int n, int x) {
    // Right part: positions [p .. n-1] in 0-based after special index
    // One operation toggles a prefix of this part (or nothing).
    if (p >= n) return 0;
 
    int cost = (a[n - 1] != x);
    for (int i = n - 2; i >= p; i--) {
        int cur = (a[i] != x);
        int nxt = (a[i + 1] != x);
        if (cur != nxt) cost++;
    }
    return cost;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int p;
        cin >> p;   // k = 1 in this version
        p--;        // 0-based
 
        int x = a[p];
 
        int L = leftCost(a, p + 1, x);
        int R = rightCost(a, p + 1, n, x);
 
        int ans = max(L, R);
        if (ans % 2) ans++;   // special index is flipped every operation, so total must be even
 
        cout << ans << '
';
    }
 
    return 0;
}