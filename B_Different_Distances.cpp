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
        vector<int> v(4 * n + 1);
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
            v[3 * n + i] = i;
        }
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                v[n + i] = i;
                v[3 * n + 1 - i] = i;
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                v[n + i] = i + 1;
                v[2 * n + i] = i + 1;
            }
            v[2 * n] = v[3 * n] = 1;
        }
        for (int i = 1; i <=4*n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
}