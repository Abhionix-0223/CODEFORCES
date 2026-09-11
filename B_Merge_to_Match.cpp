#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    if (m * 2 > n)
    {
        cout << "NO\n";
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool ok = true;
  for (int i = 0; i < m; i++)
  {
    if(a[i]>=b[i]|| b[i]>=a[n-m+i])
    {
        ok = false;
        break;
    }
  }
  cout<<(ok?"YES\n":"NO\n");
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