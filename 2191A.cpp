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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<pair<int, char>> v2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                int x = v[i];
                char y = 'r';
                v2.push_back({x, y});
            }
            else
            {
                int x = v[i];
                char y = 'b';
                v2.push_back({x, y});
            }
        }
        sort(v2.begin(), v2.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<v2[i].first<<" "<<v2[i].second<<endl;
        // }
        
        bool pres = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v2[i].second == v2[i+1].second)
            {
                pres = 0;
                break;
            }
        }
        if (pres)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}