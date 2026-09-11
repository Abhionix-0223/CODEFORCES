#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;
    {
        while (t--)
        {
            int n;
            cin >> n;
            vector<int> p(n);
            vector<int> bad_marks(n + 1, 0);

            for (int i = 0; i < n; ++i)
            {
                cin >> p[i];
                int chair_idx = i + 1;
                int target_mark = p[i];

                if (target_mark > chair_idx)
                {
                    bad_marks[target_mark]++;
                }
            }

            int max_chairs = 0;
            int current_penalty = 0;

            for (int m = 1; m <= n; ++m)
            {
                current_penalty += bad_marks[m];
                max_chairs = max(max_chairs, m - current_penalty);
            }

            cout << max_chairs << "\n";
        }
    }
    return 0;
}
