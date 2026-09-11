#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int l = 0, r = 1;
        bool ok = false;
        while (r < n)
        {
            if (v[r] - v[l] < k)
                r++;
            else if (v[r] - v[l] > k)
                l++;
            else
            {
                cout << "YES\n";
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << "NO\n";
    }
}