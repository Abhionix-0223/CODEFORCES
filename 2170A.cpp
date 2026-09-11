#include <bits/stdc++.h>
using namespace std;
const int N = 102;
int arr[N][N];
int presum[N][N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                arr[i][j] = 0;
            }
        }
        int a = 1;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] = a++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                presum[i][j] = arr[i][j] + arr[i - 1][j] + arr[i][j - 1] + arr[i][j + 1] + arr[i + 1][j];
            }
            // cout << endl;
        }
        // for (int i = 0; i <= n + 1; i++)
        // {
        //     for (int j = 0; j <= n + 1; j++)
        //     {
        //         cout << presum[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int max = -1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                max = max > presum[i][j] ? max : presum[i][j];
            }
        }
        cout << max << endl;
    }
}