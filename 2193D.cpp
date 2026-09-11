#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> sp(n), md(n);
        for (auto &a : sp)
            cin >> a;
        for (auto &a : md)
            cin >> a;
        sort(sp.begin(), sp.end());
        vector<long long> ls;
        ls.push_back(md[0]);
        for (long long i = 1; i < n; i++)
            ls.push_back(ls[i - 1] + md[i]);
        long long max = -1;
        for (long long i = 0; n >= ls[i] && i < n; i++)
        {
            max = (sp[n - ls[i]] * (i + 1)) > max ? (sp[n - ls[i]] * (i + 1)) : max;
        }
        cout << max << endl;
    }
}