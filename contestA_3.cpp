#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int c[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i <= N; i++)
            c[i] = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            c[arr[i]]++;
        sort(arr, arr + n);
        int cont = 0;
        int diff[2] = {0, 0};
        int j = 0;
        for (int i = 1; i <= arr[n - 1]; i++)
        {
            if (c[i] > 0)
            {
                cont++;
                diff[j] = i;
                j++;
            }
            if (cont > 2)
                break;
        }
        if (cont == 1)
            cout << "yes" << endl;
        else if (cont == 2)
        {
            if (abs(c[diff[0]] - c[diff[1]]) <= 1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else if (cont > 2)
            cout << "no" << endl;
    }
}
