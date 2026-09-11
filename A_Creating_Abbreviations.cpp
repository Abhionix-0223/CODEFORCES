#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<char> words;
    vector<string> abb;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        words.push_back(s[0] - 'a' + 'A');
    }

    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        abb.push_back(s);
    }

    vector<bool> done(k, false);
    int count = 0;

    while (count < k)
    {
        bool changed = false;

        for (int i = 0; i < k; i++)
        {
            if (done[i])
                continue;

            bool ok = true;

            for (char c : abb[i])
            {
                if (find(words.begin(), words.end(), c) == words.end())
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                words.push_back(abb[i][0]);
                done[i] = true;
                count++;
                changed = true;
            }
        }

        if (!changed)
            break;
    }

    cout << (count == k ? "YES\n" : "NO\n");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}