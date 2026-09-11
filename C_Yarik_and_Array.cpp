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
        ll n;
        cin >> n;
        vector<int> v;
        vector<pair<int, int>> index;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int max_sum = v[0], pairity = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (pairity != abs(v[i] % 2))
                sum = max(v[i], sum+v[i]);
            else
                sum = v[i];
            pairity = abs(v[i] % 2);
            max_sum = max(max_sum, sum);
        }
        max_sum = max(max_sum, sum);
        cout << max_sum << "\n";
    }
}