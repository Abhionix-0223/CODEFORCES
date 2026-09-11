#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check_anamoly(vector<int> &v)
{
    ll n = v.size();
    unordered_map<int, bool> m;

    for (int i = 0; i < n; i++)
        m[v[i]] = false;

    bool ok = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            if (m[v[i]] == true)
            {
                ok = false;
                return ok;
            }
        }
        else
        {
            m[v[i - 1]] = true;
        }
        if (m[v[i]] == true && v[i] != v[i - 1])
        {
            ok = false;
            return ok;
        }
    }
    return ok;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &val : v)
        cin>>val;
        cout<<check_anamoly(v)<<'\n';
    }
}