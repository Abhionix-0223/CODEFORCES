#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<ll> stack;
    for (int i = 0; i < n; ++i) {
        ll curr = a[i];
        while (!stack.empty() && stack.back() > curr) {
            ll remained_pile = stack.back();
            stack.pop_back();
            curr = remained_pile + curr;
        }
        stack.push_back(curr);
    }
    cout << stack.back() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
