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
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            mx = mx > v[i] ? mx : v[i];
        }
        int count = 0;
        for (auto a : v)
        {
            count = mx == a ? ++count : count;
        }
        cout << count<<endl;
    }
}