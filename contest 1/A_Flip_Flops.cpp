#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n && k >= 0; i++)
        {
            if (v[i] <= c)
            {
                long long add = c - v[i] > k ? k : c - v[i];
                v[i] += add;
                k -= add;
                c += v[i];
            }
        }
        cout<<c<<endl;
    }
}