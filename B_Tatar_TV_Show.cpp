#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> oc(k, 0);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                oc[i % k]++;
            }
        }

        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            if (oc[i] % 2 != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}