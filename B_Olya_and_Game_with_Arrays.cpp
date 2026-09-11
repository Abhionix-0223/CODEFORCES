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
        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> s;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                s.push_back(x);
            }
            sort(s.begin(), s.end());
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < v[i].size(); j++)
        //     {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        long long count = 0;
        int midx = 0;
        vector<pair<int, int>> x;
        for (int i = 0; i < n; i++)
        {
            midx = v[midx][1] >= v[i][1] ? i : midx;
        }
        long long beauty = v[0][0];
        for (int i = 0; i < n; i++)
        {
            if (i == midx)
                continue;
            beauty += v[i][1];
        }
        cout << beauty << endl;
    }
}