#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int answer(int i, int l)
{
    return ((l + i - 1) / i) * i;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        bool ok = 1;
        vector<ll> ans;
        ans.push_back(l);
        for (int i = 2; i <= n; i++)
        {
            int y = answer(i, l);
            if (y <= r)
                ans.push_back(y);
            else
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
            for (auto &val : ans)
                cout << val << " ";
            cout<<'\n';
        }
        else
            cout << "NO\n";
    }
}