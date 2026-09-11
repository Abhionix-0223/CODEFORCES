#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    vector<int> weightedsum1, weightedsum2;
    weightedsum1.push_back(0);
    weightedsum2.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            weightedsum1.push_back(weightedsum1.back() + 1);
        else
            weightedsum1.push_back(weightedsum1.back() - 1);
        if (v[i] == 3)
            weightedsum2.push_back(weightedsum2.back() - 1);
        else
            weightedsum2.push_back(weightedsum2.back() + 1);
    }
    int minVal = INT_MAX;
int x = -1, y = -1;
int minIdx = -1;
if (weightedsum2[0] >= 0)
{
    minVal = weightedsum2[0];
    minIdx = 0;
}

for (int i = 1; i <= n; i++)
{
    if (minIdx != -1 && weightedsum2[i] >= minVal)
    {
        x = minIdx;
        y = i;
        break;
    }
    if (weightedsum2[i] >= 0 && weightedsum2[i] < minVal)
    {
        minVal = weightedsum2[i];
        minIdx = i;
    }
}
if (x != -1)
{
    cout << "yes\n " << '\n';
}
else
{
    cout << "No\n";
}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}