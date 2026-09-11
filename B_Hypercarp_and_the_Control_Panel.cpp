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
    ll delet = 0;
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] == v[i])
            len++;
        else
        {
            if (len > 1)
            {
                delet += (len - 1);
                len = 1;
            }
        }
    }
    if (len > 1)
        delet += (len - 1);
    bool ok4 = false;
    if (n >= 4)
    {
        int a = v[0], b = v[1], c = v[2], d = v[3];
        int i = 3;
        while (1)
        {
            if (a == b && b != c && c == d)
            {
                delet -= 2;
                ok4 = true;
                break;
            }
            i++;
            if (i == n)
                break;
            a = v[i - 3];
            b = v[i - 2];
            c = v[i - 1];
            d = v[i];
        }
    }
    if (n >= 3 && !ok4)
    {
        int a = v[0], b = v[1], c = v[2];
        int i = 2;
        while (1)
        {
            if ((a == b && b != c && (i + 1 >= n || v[i + 1] != b)) ||
                (a != b && b == c && (i - 3 < 0 || v[i - 3] != b)))
            {
                delet -= 1;
                break;
            }
            i++;
            if (i == n)
                break;
            a = v[i - 2];
            b = v[i - 1];
            c = v[i];
        }
    }
    cout << n - delet << '\n';
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