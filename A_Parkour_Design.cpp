#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((x - 2 * y) % 3 == 0)

        {
            if (x < 2)
                cout << "no" << endl;
            else if (y <= x / 2 && y >= -x / 4)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
            cout << "no" << endl;
    }
}