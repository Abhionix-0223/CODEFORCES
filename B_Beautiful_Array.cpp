
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long smax = b * k + n * k - n;
        int bmax = s / k;
        if (bmax < b || smax < s)
            cout << -1 << endl;
        else
        {
            vector<long long> v(n, 0);
            long long a = k * (b + 1) - 1;
            v[0] = min(s, a);
            long long rem = s - v[0];
            for (int i = 1; i < n && rem > 0; i++)
            {
                long long add = min(k - 1, rem);
                v[i] = add;
                rem -= add;
            }

            for (int q = 0; q < n; q++)
                cout << v[q] << " ";
            cout << endl;
        }
    }
}