#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int first_one = -1, last_one = -1;

    unordered_map<int, bool> neg_one;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            neg_one[i] = true;
            v[i] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            first_one = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            last_one = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1 && neg_one[i] == true && (i < last_one && i > first_one))
            v[i] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout<<'\n';
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