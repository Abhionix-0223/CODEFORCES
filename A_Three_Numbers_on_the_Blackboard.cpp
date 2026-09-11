#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[0] + v[1] < v[2])
        cout << v[1] << '\n';
    else
        cout << v[2] - v[0] << '\n';
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