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
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        int ans = 0;
        for (int i = 0; i < n ; i++)
        {
            if(a[i]>b[i])
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
        int mx = INT_MIN;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(a[i],mx);
            sum += b[i];
        }
        sum+= mx;
        cout<<sum<<"\n";
    }
}