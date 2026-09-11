#include <bits/stdc++.h>
using namespace std;

long long lcm2(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

long long lcm3(long long a, long long b, long long c)
{
    return lcm2(lcm2(a, b), c);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;

        long long x = lcm3(a, b, c);
        long long y = lcm2(a, b);
        long long z = lcm2(b, c);
        long long w = lcm2(a, c);

        long long abc = m / x;
        long long ab = m / y - abc;
        long long bc = m / z - abc;
        long long ca = m / w - abc;

        long long A = m / a - ab - ca - abc;
        long long B = m / b - ab - bc - abc;
        long long C = m / c - bc - ca - abc;

        long long Aw = A * 6 + ab * 3 + ca * 3 + abc * 2;
        long long Bw = B * 6 + ab * 3 + bc * 3 + abc * 2;
        long long Cw = C * 6 + bc * 3 + ca * 3 + abc * 2;

        cout << Aw << " " << Bw << " " << Cw << endl;
    }
}