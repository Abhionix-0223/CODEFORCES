#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long b = n;
        long long cost = 0;

        while (b > 0)
        {
            long long x = (long long)floor(log(b) / log(3) + 1e-12);
            // long long p = pow(3, x);
            long long p = (long long)(pow(3, x) + 0.5);
            long long a = b / p;

            cost += a * (pow(3, x + 1) + x * pow(3, x - 1));
            b %= p;
        }

        cout << cost << '\n';
    }
    return 0;
}