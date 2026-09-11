#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    string s, target;
    cin >> n >> s >> target;
    int idx = n - 1;
    bool match = true, ok = true;
    vector<int> freq(n, 0);
    int zc = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zc++;
        freq[i] = zc;
    }
    while (idx>=0)
    {
        bool curr = s[idx] == target[idx];
        if (curr != match)
        {
            if (freq[idx] * 2 != idx + 1)
            {
                ok = false;
                break;
            }
            else
                match = !match;
        }
        idx--;
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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