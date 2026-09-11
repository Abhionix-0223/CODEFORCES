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
        string s;
        cin >> s;

        int fc = 0, tc = 0;
        bool one_or_three = false;
        int first_one_or_three = -1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '4')
                fc++;

            if (!one_or_three && (s[i] == '1' || s[i] == '3'))
            {
                first_one_or_three = i;
                one_or_three = true;
            }
        }

        if (first_one_or_three != -1)
        {
            for (int i = first_one_or_three; i < s.size(); i++)
            {
                if (s[i] == '2')
                    tc++;
            }
        }

        cout << fc + tc << "\n";
    }
}