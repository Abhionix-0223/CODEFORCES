#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> pos_eve1, pos_odd1, pos_eve2, pos_odd2;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1')
        {
            if (i % 2)
                pos_odd1.push_back(i);
            else
                pos_eve1.push_back(i);
        }
        if (s2[i] == '1')
        {
            if (i % 2)
                pos_odd2.push_back(i);
            else
                pos_eve2.push_back(i);
        }
    }
    bool ok = true;
    if ((pos_eve1.size() == pos_eve2.size()) && pos_odd1.size() == pos_odd2.size())
    {
        for (int i = 0; i < pos_eve1.size(); i++)
        {
            if ((pos_eve2[i] - pos_eve1[i]) % 2 != 0)
            {
                ok = false;
                break;
            }
        }
         for (int i = 0; i < pos_odd1.size(); i++)
        {
            if ((pos_odd2[i] - pos_odd1[i]) % 2 != 0)
            {
                ok = false;
                break;
            }
        }
    }
    else
        ok = false;
    cout << (ok ? "YES\n" : "NO\n");
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