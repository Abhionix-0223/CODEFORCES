#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--)
        {
            ll a; // Fixed: Changed from int to ll to handle a <= 10^17
            int n;
            cin >> a >> n;
            
            vector<ll> v(n);
            ll mx = -1, mn = LLONG_MAX;
            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
                mx = max(v[i], mx);
                mn = min(mn, v[i]);
            }
            
            
            sort(v.begin(), v.end());
            
            ll b = a;
            ll length = 0;
            vector<ll> digits;
            if (b == 0) {
                digits.push_back(0);
                length = 1;
            } else {
                while (b)
                {
                    length++;
                    digits.push_back(b % 10);
                    b /= 10;
                }
                
                for (int i = 0; i < length / 2; i++)
                    swap(digits[i], digits[length - i - 1]);
            }
            
            vector<ll> candidates;
 
            
            if (length > 1) {
                ll smaller_length_max = 0;
                for (int i = 0; i < length - 1; i++)
                    smaller_length_max = smaller_length_max * 10 + mx;
                candidates.push_back(smaller_length_max);
            } else if (mn == 0) {
                candidates.push_back(0);
            }
 
            
            ll highier_length_min = 0;
            // Handle leading zero rule for longer length numbers
            if (mn == 0 && n > 1) {
                highier_length_min = v[1]; // Pick next smallest non-zero digit
                for (int i = 0; i < length; i++)
                    highier_length_min = highier_length_min * 10 + mn;
            } else {
                for (int i = 0; i < length + 1; i++)
                    highier_length_min = highier_length_min * 10 + mn;
            }
            candidates.push_back(highier_length_min);
 
            
            ll same_length_min = 0;
            int curr_lens = 0;
            bool slms = true;
            for (int i = 0; i < length; i++)
            {
                int curr = digits[i];
                auto lb = lower_bound(v.begin(), v.end(), curr);
                
                if (lb == v.end())
                {
                    for (int j = 0; j < length - curr_lens; j++)
                        same_length_min = same_length_min * 10 + mx;
                    candidates.push_back(same_length_min);
                    slms = false;
                    break;
                }
                else if (*lb == curr)
                {
                    same_length_min = same_length_min * 10 + curr;
                    curr_lens++;
                }
                else if (*lb > curr)
                {
                    if (lb == v.begin())
                    {
                        slms = false;
                        break;
                    }
                    else
                    {
                        lb--;
                        same_length_min = same_length_min * 10 + *lb;
                        curr_lens++;
                        for (int l = 0; l < length - curr_lens; l++)
                            same_length_min = same_length_min * 10 + mx;
                        candidates.push_back(same_length_min);
                        slms = false;
                        break;
                    }
                }
            }
            if (slms)
                candidates.push_back(same_length_min);
 
            
            ll same_length_max = 0;
            int curr_leng = 0;
            bool slmm = true;
            for (int i = 0; i < length; i++)
            {
                int curr = digits[i];
                auto lb = lower_bound(v.begin(), v.end(), curr);
                
                if (lb == v.end())
                {
                    slmm = false;
                    break;
                }
                else if (*lb == curr)
                {
                    same_length_max = same_length_max * 10 + curr;
                    curr_leng++;
                }
                else if (*lb > curr)
                {
                    same_length_max = same_length_max * 10 + *lb;
                    curr_leng++;
                    for (int l = 0; l < length - curr_leng; l++)
                        same_length_max = same_length_max * 10 + mn;
                    candidates.push_back(same_length_max);
                    slmm = false;
                    break;
                }
            }
            if (slmm)
                candidates.push_back(same_length_max);
            
            
            ll ans = -1;
            for (int i = 0; i < candidates.size(); i++)
            {
                ll diff = abs(candidates[i] - a);
                if (ans == -1 || diff < ans) {
                    ans = diff;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}