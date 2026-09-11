#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    unordered_set<char> un;
    for (auto &x : s)
        un.insert(x);
    int x = un.size();
    auto it = un.begin();
    int final_erase = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        char c = *it;
        int erase = 0;
        int l = 0, r = n - 1;
        bool ok = true;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                if (s[l] == c)
                {
                    erase++;
                    l++;
                }
                else if (s[r] == c)
                {
                    erase++;
                    r--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        if (ok)
            final_erase = min(final_erase, erase);
        it++;
    }
    if (final_erase == INT_MAX)
        cout << -1 << '\n';
    else
        cout << final_erase << '\n';
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