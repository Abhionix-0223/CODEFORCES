#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &value : v)
            cin >> value;
        int teamCount = 0;
        sort(v.rbegin(), v.rend());
        int teamsize = 1;
        for (auto &value : v)
        {
            if (value * teamsize >= x)
            {
                teamCount++;
                teamsize = 1;
            }
            else
                teamsize++;
        }
        cout << teamCount << endl;
    }
}