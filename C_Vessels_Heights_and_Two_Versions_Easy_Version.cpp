#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll max_water(vector<int> &v, int i)
{
    ll mx = INT_MIN, n = v.size(), k = 0, j;
    stack<int> s;
    for (j = i; k < n - 1; j = (j % n) + 1, k++)
    {
        if (j == i)
            s.push(v[j]);
        else
        {
            int x = max(s.top(), v[j]);
            s.push(x);
        }
    }
    if (s.top() > v[n - 1])
    {
        int x = s.top(), count = 0;
        while (s.top() == x)
        {
            count++;
            if (!s.empty())
                s.pop();
            else 
                break;
        }
        for (int k = j; count >= 0; k++)
        {
            
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (auto &val : height)
        cin >> val;
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
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void solve() {
//     int n;
//     if (!(cin >> n)) return;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     for (int i = 0; i < n; i++) {
//         dp[i][i] = 0;
//         vector<int> left(n, 0);
//         vector<int> right(n, 0);

//         for (int len = 1; len < n; len++) {
//             int x = ((i - len) % n + n) % n;
//             int pre = ((x + 1) % n + n) % n;
//             left[x] = max(left[pre], a[x]);
//         }

//         for (int len = 1; len < n; len++) {
//             int x = ((i + len) % n + n) % n;
//             int pre = ((x - 1) % n + n) % n;
//             right[x] = max(right[pre], a[pre]);
//         }

//         for (int j = 0; j < n; j++) {
//             if (j == i) continue;
//             dp[i][j] = min(right[j], left[j]);
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         long long sum = 0;
//         for (int j = 0; j < n; j++) {
//             sum += dp[j][i];
//         }
//         cout << sum << (i == n - 1 ? "" : " ");
//     }
//     cout << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
//     solve();

//     return 0;
// }