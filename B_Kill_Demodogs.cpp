#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        if (!(cin >> n))
            return 0;
        ll M = 1e9 + 7;
        ll inv3 = 333333336;
        ll n_mod = n % M;
        ll n_minus_1 = (n_mod - 1 + M) % M;
        ll two_n_minus_1 = (2 * n_mod - 1 + M) % M;
        ll term1 = (n_mod * n_mod) % M;
        ll term2 = (n_minus_1 * n_mod) % M;
        term2 = (term2 * two_n_minus_1) % M;
        term2 = (term2 * inv3) % M;
        ll term3 = 0;
        if (n % 2 == 0)
            term3 = ((n / 2) % M) * n_minus_1;
        else
            term3 = (n_mod * ((n - 1) / 2 % M));
        term3 %= M;
        ll ans = (term1 + term2 + term3) % M;
        cout << ans * 2022 % M << endl;
    }
    return 0;
}
