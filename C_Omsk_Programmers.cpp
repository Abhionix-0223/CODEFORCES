#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int a, b, x;
    cin >> a >> b >> x;
    vector<int> av, bv;
    while (a)
    {
        av.push_back(a);
        a /= x;
    }
    while (b)
    {
        bv.push_back(b);
        b /= x;
    }
    av.push_back(0);
    bv.push_back(0);
    int mn = INT_MAX;
    for (int i = 0; i < av.size(); i++)
    {
        for (int j = 0; j < bv.size(); j++)
        {
            mn = min(abs(bv[j] - av[i]) + i + j, mn);
        }
    }
    cout << mn << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}