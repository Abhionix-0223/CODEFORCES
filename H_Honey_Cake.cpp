#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long w, h, d, n;
    cin >> w >> h >> d >> n;
    long long a = __gcd(w, n);
    long long b = __gcd(n, h);
    long long c = __gcd(n, d);
    long long i = n / a;
    long long e = __gcd(i, b);
    long long f = i / e;
    long long g = __gcd(f, c);
    if (a*e*g!=n)
        cout << -1 << endl;
    else
        cout << a - 1 << " " << e - 1 << " " << g - 1 << endl;
}