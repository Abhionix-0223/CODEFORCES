#include <bits/stdc++.h>
using namespace std;
long long gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
long long int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[c];
    int j = 1;
    for (int i = 0; i < c; i++)
    {
        while (true)
        {
            if (j % lcm(a, b) == 0 || j % b == 0 || j % a == 0)
            {
                arr[i] = j;
                j++;
                break;
            }
            j++;
        }
    }   
    for (int i = 0; i < c; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    if (arr[c - 1] % lcm(a, b) == 0)
    {
        for (int i = arr[c - 1]; i >= 0; i--)
        {
            if (i % lcm(a, b) == 0)
            {
                cout << i;
                cout<<" ";
            }
        }
    }
   else if (arr[c - 1] % b == 0)
    {
        for (int i = arr[c - 1]; i >= 0; i--)
        {
            if (i % b == 0)
            {
                cout << i;
                cout<<" ";
            }
        }
    } 
   else if (arr[c - 1] % a == 0)
    {
        for (int i = arr[c - 1]; i >= 0; i--)
        {
            if (i % a == 0)
            {
                cout << i;
                cout<<" ";
            }
        }
    }
}