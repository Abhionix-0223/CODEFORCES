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
        ll n, r, b;
        cin >> n >> r >> b;
        ll x = r / (b + 1), y = r % (b + 1);
        vector<ll> v;
        for (int i = 0; i < y; i++)
            v.push_back(x + 1);
        for (int i = 0; i < b + 1 - y; i++)
            v.push_back(x);
        string s;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i]; j++)
            {
                s.push_back('R');
            }
            s.push_back('B');
        }
        s.pop_back();
        cout << s << endl;
    }
}