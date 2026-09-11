#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    const ll M = 1e9 + 7;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (auto &val : a)
            cin >> val;
        for (auto &val : b)
            cin >> val;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> option;
        for (int i = 0; i < n; i++)
            option.push_back(a.end() - upper_bound(a.begin(), a.end(), b[i]));
        int prev = option[n - 1], left_over = prev - 1;
        ll product = prev;
        for (int i = n - 2; i >= 0; i--)
        {
            ll curr = option[i] - prev + left_over;
            product = (product * curr) % M;
            prev = option[i];
            left_over = curr - 1;
        }
        cout<<product<<"\n";
    }
}