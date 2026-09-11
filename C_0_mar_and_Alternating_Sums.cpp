#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
ll mod_pow(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = res * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return res;
}
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int no_of_neg = 0;
    while (no_of_neg < n && v[no_of_neg] == -1) no_of_neg++;
    int no_of_pos = n - no_of_neg;
    int g = 0;
    ll change_by_1 = 0;
    ll prev = -2000000000LL;
    for (int i = no_of_neg; i < n; i++) {
        if (v[i] != prev) {
            if (g > 0 && v[i] == prev + 1) {
                change_by_1++;
            }
            prev = v[i];
            g++;
        }
    } 
    ll S0 = (no_of_pos == 0 ? 1LL : mod_pow(2, (ll)no_of_pos - g, MOD));
    ll Sm1 = S0 * change_by_1 % MOD;
    
    ll even_ways = (no_of_neg == 0 ? 1LL : mod_pow(2, (ll)no_of_neg - 1, MOD));
    ll odd_ways = (no_of_neg == 0 ? 0LL : mod_pow(2, (ll)no_of_neg - 1, MOD));
    
    ll ans = (even_ways * S0 % MOD + odd_ways * Sm1 % MOD) % MOD;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        solve();
    }
    return 0;
}