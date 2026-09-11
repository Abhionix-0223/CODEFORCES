#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long firstk = k*(k+1)/2, lastk = n*(n+1)/2 - (n-k)*(n-k+1)/2;
        if (x <= lastk && x >= firstk)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}