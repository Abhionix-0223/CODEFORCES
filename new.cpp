#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &val : v)
        cin >> val;
    if (n < 4)
    {
        cout << -1 << '\n';
        return;
    }
    int l = 0, r = 3;
    set<int> s;
    for (int i = 0; i < 4; i++)
        s.insert(v[i]);
    int curr_len = 4;
    bool ok1 = false, ok2 = false;
    while (l < r && r < n)
    {
        auto beg = s.begin(), en = s.end();
        en--;
        if ((v[r] == *beg) || v[r] == *en)
        {
            if (r != n - 1)
            {
                r++;
                curr_len++;
                s.insert(v[r]);
                ok2 = false;
            }
            else
            {
                cout << -1 << '\n';
                return;
            }
        }
        else
            ok2 = true;
        if ((v[l] == *beg) || v[l] == *en)
        {
            s.erase(v[l]);
            l++;
            if (curr_len == 4)
            {
                if (r + 1 != n)
                    r++;
                else
                {
                    cout << -1 << '\n';
                    return;
                }
            }
            s.insert(v[r]);
            ok1 = false;
        }
        else
            ok1 = true;
    }
    if (ok1 && ok2)
        cout << l + 1 << " " << r + 1 << '\n';
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