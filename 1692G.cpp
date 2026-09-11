#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b)
{
    return a > b ? a : b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n], arr2[n + 1];
        for (long i = 0; i < n; i++)
            cin >> arr[i];
        long long j = 0;
        for (long i = 0; i < n; i++)
        {
            arr2[i] = arr[i] * (long long)pow(2, j);
            j++;
        }
        arr2[n] = 0;
        long long arrk[n - k + 1];
        for (long i = 0; i < n - k + 1; i++)
            arrk[i] = 0;
        long long m = 0;
        for (long i = 0; i < n; i++)
        {
            if (arr2[i] >= arr2[i + 1])
            {
                arrk[m] = i + 1;
                m++;
            }
        }
        long long count = 0;
        for (long i = 0; i < n - k + 1; i++)
        {
            if (i == 0)
                count += max(0, arrk[0] - k);
            else
                count += max(0, arrk[i] - arrk[i - 1] - k);
            if (arrk[i] == 0)
                break;
        }
        cout << count << endl;
    }
}