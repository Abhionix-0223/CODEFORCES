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
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(2);
        vector<bool> present(2 * n + 1, false);
        present[3] = true;
        for (int i = 3; i < 2 * n + 1; i++)
        {
            if (present[i] == true)
                continue;
            else
            {
                cout<<ans.back()<<"\n";
                int a = ans.back() + i;
                present[i] = true;
                ans.push_back(i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}