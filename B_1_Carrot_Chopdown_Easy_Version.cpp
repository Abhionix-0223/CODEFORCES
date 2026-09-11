#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    vector<int> count(m + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= m) {
            count[x]++;
        }
    }
    vector<int> suff(m + 2, 0);
    for (int i = m; i >= 1; i--) 
        suff[i] = suff[i + 1] + count[i];
    int ans = 0;
    for (int s = 1; s <= m; s++) {
        int cur = suff[s];
        if (2 * s <= m) 
            cur += count[2 * s];
        ans = max(ans, cur);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}