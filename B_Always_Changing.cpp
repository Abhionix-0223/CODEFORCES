#include <bits/stdc++.h>
using namespace std;

int longest(const string& s, int start) {
    int cnt = 0, exp = start;
    for (char c : s) {
        if (c - '0' == exp) {
            ++cnt;
            exp ^= 1;
        }
    }
    return cnt;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int z = 0;
    for (char c : s) {
        if (c == '0') ++z;
    }
    int o = n - z;
    int diff_zero_one = z - o;
    if (abs(diff_zero_one) > 2) {
        cout << -1 << '\n';
        return;
    }
    int L0 = longest(s, 0);
    int L1 = longest(s, 1);
    int mr;
    if (diff_zero_one == 0) {
        mr = max(L0, L1);
    } else if (diff_zero_one == 1) {
        mr = max(L0, L1 % 2 == 0 ? L1 : L1 - 1);
    } else if (diff_zero_one == 2) {
        mr = L0 % 2 == 1 ? L0 : L0 - 1;
    } else if (diff_zero_one == -1) {
        mr = max(L1, L0 % 2 == 0 ? L0 : L0 - 1);
    } else {
        mr = L1 % 2 == 1 ? L1 : L1 - 1;
    }
    cout << n - mr << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}