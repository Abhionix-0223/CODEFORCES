#include <bits/stdc++.h>
using namespace std;
long long countNumbers(long long n)
{
    return (n / 2 + n / 3 + n / 5 + n / 7) - (n / 14 + n / 10 + n / 6 + n / 15 + n / 21 + n / 35) + (n / 30 + n / 42 + n / 70 + n / 105) - n / 210;
}
long long solve(long long l, long long r)
{
    return r-l+1 - countNumbers(r) + countNumbers(l - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }
}