#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long h;
        cin >> n >> m >> h;
        vector<long> original_digits;
        vector<long> digits;
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            original_digits.push_back(x);
        }
        digits = original_digits;
        unordered_set<long> modificationidx;
        for (int i = 0; i < m; i++)
        {
            int b;
            long c;
            cin >> b >> c;
            if (digits[b - 1] + c <= h)
            {
                digits[b - 1] += c;
                modificationidx.insert(b - 1);
            }
            else
            {
                for (auto idx : modificationidx)
                {
                    digits[idx] = original_digits[idx];
                }
                modificationidx.clear();
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << digits[i] << " ";
        }
        cout << endl;
    }
}