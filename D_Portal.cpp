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
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> v;
        queue<ll> q;
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            v.push_back(k);
            if (i >= x && i < y)
                q.push(k);
        }
        ll min_q = LLONG_MAX;
        for (int i = x; i < y; i++)
            min_q = min(min_q, v[i]);
        while (q.front() != min_q)
        {
            ll data = q.front();
            q.pop();
            q.push(data);
        }
        ll min_idx = x;
        for (int i = x - 1; i >= 0; i--)
            min_idx = v[i] > min_q ? i : min_idx;
        vector<ll> ans;
        for (int i = 0; i < min_idx; i++)
            ans.push_back(v[i]);
        if (min_idx == x)
        {
            ll max_idx = y - 1;
            for (int i = y; i < n; i++)
            {
                if (v[i] > min_q)
                {
                    max_idx = i;
                    break;
                }
            }
            max_idx = max_idx == y-1?n:max_idx;
            for (int i = y; i < max_idx; i++)
                ans.push_back(v[i]);
            while (q.size())
            {
                ans.push_back(q.front());
                q.pop();
            }
            for (int i = max_idx; i < n; i++)
                ans.push_back(v[i]);
        }
        else
        {
            while (q.size())
            {
                ans.push_back(q.front());
                q.pop();
            }
            for (int i = min_idx; i < x; i++)
                ans.push_back(v[i]);
            for (int i = y; i < n; i++)
                ans.push_back(v[i]);
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}