#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                if (v1[i] < v2[i])
                {
                    v1[i] = v2[i];
                }
            }
            else
            {
                int mx = v2[i] > v1[i + 1] ? v2[i] : v1[i + 1];
                if (v1[i] < mx)
                {
                    v1[i] = mx;
                }
            }
        }
        vector<long long> Vsum(n + 1, 0);
        for (int i = 1; i <= n; i++)
            Vsum[i] = Vsum[i - 1] + v1[i - 1];
        vector<long long> result;
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            result.push_back(Vsum[r] - Vsum[l - 1]);
        }
        for (auto x : result)
            cout << x << " ";
        cout << endl;
    }
}