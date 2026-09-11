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
        vector<int> v(n);
        for (auto &val : v)
            cin >> val;
        int pairity = v[0] % 2;
        int len = 1;
        int operation = 0;
        for (int i = 1; i < n; i++)
        {
            if (pairity != v[i] % 2)
            {
                operation += (len - 1);
                len = 1;
                pairity = v[i] % 2;
            }
            else
            {
                len++;
            }
            if (i == n - 1 && pairity == v[i] % 2)
            {
                operation += (len - 1);
            }
        }
        cout << operation << '\n';
    }
}