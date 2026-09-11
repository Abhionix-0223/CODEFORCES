#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5, K = 2e5 + 5;
int product[N], voucher[K];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> product[i];
        for (int i = 1; i <= k; i++)
            cin >> voucher[i];
            sort(product, product + n+1);
            sort(voucher, voucher + k+1);
        int i = n;
        for (int j = 1; j <= k; j++)
        {
            i=i-voucher[j];
            product[i+1]=0;
            if(i<1)
            break;
        }

        long long cost = 0;
        for (int i = 1; i <= n; i++)
        {
            cost += product[i];
        }
        cout << cost << endl;
    }
}