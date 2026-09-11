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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> ans;
        ans.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
            else
                ans.push_back(v[i]);
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }
}