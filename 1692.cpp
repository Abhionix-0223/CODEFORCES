#include <bits/stdc++.h>
using namespace std;
char a[10][10];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 2; i <= 7; i++)
        {
            for (int j = 2; j <= 7; j++)
            {
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i][j + 1] == '.' && a[i][j - 1] == '.' && a[i - 1][j] == '.' && a[i + 1][j] == '.')
                {
                    cout << i << " " << j << endl;
                }
                else
                    continue;
            }
        }
    }
}