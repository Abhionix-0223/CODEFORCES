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
        ll n;
        cin >> n;
        ll size = n * 3;
        vector<ll> v(size, 0);
        ll start = n + 1;
        ll start_pre = 1;
        for (int i = 1; i < size; i += 3)
        {
            v[i] = start;
            v[i - 1] = start_pre++;
            v[i + 1] = start + 1;
            start += 2;
        }
        for (auto &val : v)
            cout << val << " ";
        cout << "\n";
    }
}