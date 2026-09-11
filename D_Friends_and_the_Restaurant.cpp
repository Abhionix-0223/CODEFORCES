// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     for (auto &val : a)
//         cin >> val;
//     for (auto &val : b)
//         cin >> val;
//     vector<int> diff;
//     for (int i = 0; i < n; i++)
//     {
//         ll x = b[i] - a[i];
//         diff.push_back(x);
//     }
//     sort(diff.begin(), diff.end());
//    ll teamcount = 0;
//    int x = 0;
//     int y = n-1;
//     while(x<y)
//     {
//         if(diff[x]+diff[y]>=0)
//         {
//             teamcount++;
//             x++;
//             y--;
//         }
//         else
//         x++;
//     }
//     cout<<teamcount<<'\n';
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &val : a)
        cin >> val;
    for (auto &val : b)
        cin >> val;
    vector<int> diff, neg, pos;
    for (int i = 0; i < n; i++)
    {
        ll x = b[i] - a[i];
        if (x < 0)
            neg.push_back(x);
        else
            pos.push_back(x);
    }
    sort(neg.begin(), neg.end());
    sort(pos.rbegin(), pos.rend());
    ll teamcount = 0;
    int x = 0;
    int y = n - 1;
    auto ng = neg.begin(), pv = pos.begin();
    // while (x < y)
    // {
    //     if (diff[x] + diff[y] >= 0)
    //     {
    //         // teamcount++;
    //         x++;
    //         y--;
    //     }
    //     else
    //         x++;
    // }
    while (ng != neg.end() && pv != pos.end())
    {
        if (*pv + *ng >= 0)
        {
            pv++;
            ng++;
            teamcount++;
        }
        else
            ng++;
    }
    if (pv != pos.end())
        teamcount += (pos.end() - pv) / 2;
    cout << teamcount << '\n';
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