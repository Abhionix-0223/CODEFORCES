#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long swapp_count(const vector<int> &p)
{
    long long total_swap = 0;
    int n = p.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (p[i] > p[j])
            {
                total_swap++;
            }
        }
    }
    return total_swap;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    vector<long long> a_sorted = a;
    sort(a_sorted.begin(), a_sorted.end());
    for (int i = 0; i < n; ++i)
    {
        if (a_sorted[i] > b[i])
        {
            cout << -1 << "\n";
            return;
        }
    }

    vector<int> p(n);
    vector<bool> use(n, false);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!use[j] && a[i] <= b[j])
            {
                use[j] = true;

                vector<long long> rem_a, rem_b;
                for (int k = i + 1; k < n; ++k)
                    rem_a.push_back(a[k]);
                for (int k = 0; k < n; ++k)
                {
                    if (!use[k])
                        rem_b.push_back(b[k]);
                }

                sort(rem_a.begin(), rem_a.end());
                sort(rem_b.begin(), rem_b.end());

                bool valid = true;
                for (size_t k = 0; k < rem_a.size(); ++k)
                {
                    if (rem_a[k] > rem_b[k])
                    {
                        valid = false;
                        break;
                    }
                }

                if (valid)
                {
                    p[i] = j + 1;
                    break;
                }

                use[j] = false;
            }
        }
    }
    cout << swapp_count(p) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
