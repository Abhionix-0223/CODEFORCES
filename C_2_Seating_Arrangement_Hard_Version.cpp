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
        int n, x, s;
        string arr;
        cin >> n >> x >> s >> arr;
        map<int, int> SeatCount;
        int total_seat_count = 0;
        int in_idx = 0, ex_idx = 0;
        ll partially_filled = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'I' && in_idx < n)
            {
                total_seat_count++;
                SeatCount[in_idx]++;
                partially_filled += s - 1;
                if (SeatCount[in_idx] == s)
                    ex_idx++;
                in_idx++;
            }
            else if (arr[i] == 'E')
            {
                if (SeatCount[ex_idx] == 0)
                    continue;
                else
                {
                    SeatCount[ex_idx]++;
                    if(SeatCount[ex_idx]==s)
                    {
                        partially_filled-=s;
                        ex_idx++;
                    }
                    else
                        partially_filled--;
                    total_seat_count++;
                }
            }
        }
    }
}