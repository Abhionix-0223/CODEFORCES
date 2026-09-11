#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> bea(n), ver(m);
    for (auto &x : bea)
        cin >> x;
    for (auto &x : ver)
        cin >> x;
    ll bea_sum = bea[n - 1], ver_sum = ver[m - 1];
    for (int i = 1; i < n; i++)
    {
        bea_sum += bea[i - 1] - bea[i] +1;
    }
    for (int i = 1; i < m; i++)
    {
        ver_sum += ver[i - 1] - ver[i] + 1;
    }
    //  cout<<bea_sum<<" "<<ver_sum<<'\n';
    if (bea_sum >= ver_sum)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
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