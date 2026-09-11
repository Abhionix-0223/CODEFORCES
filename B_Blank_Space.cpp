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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &val : v)
            cin >> val;
        int maxlen = INT_MIN, len = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                len++;
            else
            {
                maxlen = max(maxlen, len);
                len = 0;
            }
            if (i == n - 1)
                maxlen = max(maxlen, len);
        }
        cout<<maxlen<<'\n';
    }
}