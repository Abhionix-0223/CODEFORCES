#include <bits/stdc++.h>
using namespace std;
int prime(int a)
{
    if (a == 2)
    {
        return 1;
    }
    for (int i = 2; i < a/2; i++)
    {
        if (a % i == 0 && a != 2)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (65 <= (int)str[i] && (int)str[i] <= 90)
        {
            str[i] = str[i] + 32;
            sum -= str[i];
        }
        else if (97 <= (int)str[i] && (int)str[i] <= 122)
        {
            str[i] = str[i] - 32;
            sum += str[i];
        }
    }
    if (prime(abs(sum)))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}