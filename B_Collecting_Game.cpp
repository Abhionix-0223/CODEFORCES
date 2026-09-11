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
        vector<pair<int, int>> v2;
        vector<long long> presum(n);
        vector<int> ans(n), finalans(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back({x, i});
        }
        sort(v2.begin(), v2.end());
        presum[0]= v2[0].first;
        for (int i = 1; i < n; i++)
        { 
            presum[i] = presum[i - 1] + v2[i].first;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << presum[i] <<" ";
        // }
        ans[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (presum[i] >= v2[i + 1].first)
                ans[i] = ans[i + 1];
            else
                ans[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            finalans[v2[i].second] = ans[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << finalans[i] <<" ";
        }
        cout<<endl;
    }
}