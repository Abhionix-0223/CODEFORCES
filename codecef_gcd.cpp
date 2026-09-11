#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        const int N = 1e5 + 5;
        int arr[N];
        int hash[N];
        int hash2[N];
        int n;
        cin >> n;
        int q;
        cin >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            hash[i] = gcd(hash[i - 1], arr[i]);
        }
        for (int i = n; i >= 1; i--)
        {
            hash2[i] = gcd(hash2[i + 1], arr[i]);
        }
        // cout<<hash[n]<<" "<<hash2[1];

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << gcd(hash[l - 1], hash2[r + 1]) << endl;
        }
    }
}