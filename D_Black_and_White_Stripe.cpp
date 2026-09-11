#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        string s;
        cin >> n >> k >> s;
        vector<ll> W_count(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                W_count[i + 1] = W_count[i];
            else
                W_count[i + 1] = W_count[i] + 1;
        }
        ll min_change = LLONG_MAX;
        for (int i = 1; i <= n - k + 1; i++)
        {
            ll length = W_count[i + k - 1] - W_count[i-1];
            min_change = min(min_change, length);
        }
        cout << min_change << "\n";
    }
}