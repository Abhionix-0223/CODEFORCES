#include <bits/stdc++.h>
using namespace std;
int gcd(long long int a, long long int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans;
        long long int i = -1;
        for ( i =2; i <= 2e5; i++)
        {
            int t=1;
            for (int j = 0; j < n ; j++)
            {
                if (gcd(i, a[j]) == 1)
                {
                    t=0;
                    break;
                }     
            }
            if (t==0)
            {
                ans = i;
              break;
            }
        }
        cout<<i<<endl;
    }
}