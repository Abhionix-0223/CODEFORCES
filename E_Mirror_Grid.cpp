#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int totalChange = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < (n + 1) / 2; j++)
            {
                int a = arr[i][j] - '0';
                int b = arr[j][n - 1 - i] - '0';
                int c = arr[n - 1 - i][n - 1 - j] - '0';
                int d = arr[n - 1 - j][i] - '0';

                int ones = a + b + c + d;
                int zeros = 4 - ones;
                totalChange += min(ones, zeros);
            }
        }
        cout << totalChange << endl;
    }
}