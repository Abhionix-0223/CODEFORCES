#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int isprime(int a)
{
    bool yes = 1;
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            yes = 0;
            break;
        }
    }
    if (yes)
        return 1;
    else
        return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int a = 1 + d;
        while (!isprime(a))
            a++;
        int b = a + d;
        while (!isprime(b))
            b++;
        cout  << a * b << "\n";
    }
}