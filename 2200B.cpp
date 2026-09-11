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
        vector<int> v(n);
        for (auto &a : v)
        {
            cin >> a;
        }
        vector<int> v2 = v;
        sort(v.begin(), v.end());
        if (v2 == v)
            cout << n << endl;
        else
            cout << 1 << endl;
    }
}