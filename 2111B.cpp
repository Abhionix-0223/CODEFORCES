#include <bits/stdc++.h>
using namespace std;

int cube[11][3];
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void fibonaccicube()
{
    cube[1][0] = cube[1][1] = cube[1][2] = 1;
    for (int i = 2; i < 11; i++)
    {
        cube[i][0] = fibonacci(i + 2);
        cube[i][1] = fibonacci(i + 1);
        cube[i][2] = fibonacci(i + 1);
    }
}
int main()
{
    fibonaccicube();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<array<int, 3>> v;
        for (int i = 0; i < m; i++)
        {
            array<int, 3> arr;
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[j];
            }
            v.push_back(arr);
        }
        string s;
        for (int i = 0; i < m; i++)
        {
            if (v[i][0] >= cube[n][0] && v[i][1] >= cube[n][1] && v[i][2] >= cube[n][2])
                s.push_back('1');
            else if (v[i][0] >= cube[n][0] && v[i][1] >= cube[n][1] && v[i][2] >= cube[n][2])
                s.push_back(1);
            else if (v[i][1] >= cube[n][0] && v[i][2] >= cube[n][1] && v[i][0] >= cube[n][2])
                s.push_back('1');
            else if (v[i][2] >= cube[n][0] && v[i][1] >= cube[n][1] && v[i][0] >= cube[n][2])
                s.push_back('1');
            else if (v[i][1] >= cube[n][0] && v[i][0] >= cube[n][1] && v[i][2] >= cube[n][2])
                s.push_back('1');
            else if (v[i][2] >= cube[n][0] && v[i][0] >= cube[n][1] && v[i][1] >= cube[n][2])
                s.push_back('1');
            else
                s.push_back('0');
        }
        cout << s << endl;
    }
}