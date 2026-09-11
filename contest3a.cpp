
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> f(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> f[i];
    }

    if (n == 2)
    {

        cout << f[2] << " " << f[1] << endl;
        return;
    }

    vector<long long> a(n + 1);

    for (int i = 2; i < n; ++i)
    {
        a[i] = (f[i - 1] + f[i + 1] - 2 * f[i]) / 2;
    }

    long long sum_for_a1 = 0;
    for (int i = 2; i < n; ++i)
    {
        sum_for_a1 += a[i] * (n - i);
    }
    a[1] = (f[n] - sum_for_a1) / (n - 1);

    long long sum_for_an = 0;
    for (int i = 2; i < n; ++i)
    {
        sum_for_an += a[i] * (i - 1);
    }
    a[n] = (f[1] - sum_for_an) / (n - 1);

    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}