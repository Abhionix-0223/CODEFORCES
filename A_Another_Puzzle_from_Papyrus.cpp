// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll ;
// void solve()
// {
//     int n,c;
//     cin>>n>>c;
//     vector<int>a(n),b(n);
//     for (int i = 0; i < n; i++)
//         cin>>a[i];
//     for (int i = 0; i < n; i++)
//         cin>>b[i];
//     bool rearr = false;
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i]<b[i])
//         {
//             rearr = true;
//             break;
//         }
//     }
//     ll cost = 0;
//     if(rearr)
//     {   cost = c;
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         for (int i = 0; i < n; i++)
//         {
//             if(a[i]<b[i])
//             {
//                 cout<<-1<<'\n';
//                 break;
//             }
//             else
//                 cost+= (a[i]-b[i]);
//         }
//         cout<<cost<<'\n';
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//            cost+= a[i] - b[i];
//         }
//         cout<<cost<<'\n';
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);

    for (int &val : a)
     cin >> val;
    for (int &val : b)
     cin >> val;

    const ll mn = INT_MAX;
    ll cost1 = 0;
    bool rearrange1 = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            rearrange1 = false;
            break;
        }
        cost1 += (a[i] - b[i]);
    }
    vector<int> sa = a, sb = b;
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());
    ll cost2 = c;
    bool rearrange2 = true;
    for (int i = 0; i < n; i++)
    {
        if (sa[i] < sb[i])
        {
            rearrange2 = false;
            break;
        }
        cost2 += (sa[i] - sb[i]);
    }
    if (!rearrange1 && !rearrange2)
        cout << -1 << '\n';
    else if (rearrange1 && rearrange2)
        cout << min(cost1, cost2) << '\n';
    else if (rearrange1)
        cout << cost1 << '\n';
    else
        cout << cost2 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}