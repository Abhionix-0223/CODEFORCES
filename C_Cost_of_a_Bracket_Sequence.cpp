#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> match(n, -1);
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                if (!st.empty()) {
                    match[i] = st.top();
                    st.pop();
                }
            }
        }

        const int INF = 1e9;
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, INF));
        dp[0][0] = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= k; ++j) {
                if (dp[i][j] == INF) continue;

                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);

                if (s[i] == ')' && match[i] != -1 && j + 1 <= k) {
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]); 
                }
            }

            if (s[i] == ')' && match[i] != -1) {
                int p = match[i];
                for (int j = 0; j <= k; ++j) {
                    if (dp[p][j] != INF) {
                        dp[i + 1][j] = min(dp[i + 1][j], dp[p][j] + 1);
                        if (j + 1 <= k) {
                            dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[p][j]);
                        }
                    }
                }
            }
        }

        int min_pairs = INF;
        int best_j = 0;
        for (int j = 0; j <= k; ++j) {
            if (dp[n][j] < min_pairs) {
                min_pairs = dp[n][j];
                best_j = j;
            }
        }

        string ans(n, '0');
        int curr_i = n;
        int curr_j = best_j;

        while (curr_i > 0) {
            int i = curr_i - 1;
            if (dp[curr_i][curr_j] == dp[i][curr_j]) {
                curr_i--;
            } 
            else if (s[i] == ')' && match[i] != -1 && curr_j > 0 && dp[curr_i][curr_j] == dp[i][curr_j - 1]) {
                ans[i] = '1';
                curr_j--;
                curr_i--;
            } 
            else if (s[i] == ')' && match[i] != -1) {
                int p = match[i];
                if (dp[curr_i][curr_j] == dp[p][curr_j] + 1) {
                    curr_i = p;
                } else if (curr_j > 0 && dp[curr_i][curr_j] == dp[p][curr_j - 1]) {
                    ans[p] = '1';
                    curr_j--;
                    curr_i = p;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}