#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int binSearch(int rl, int val2, int k)
{
    int l = 0;
    int r = rl;
    int closest = 0;
    while(l < r)
    {
        int mid = l + (r - l) / 2;
        int res = val2 * mid;
        if(res == k) {return mid;}
        else if(res < k) {closest = max(closest, mid); l = mid + 1;}
        else r = mid;
    }

    return closest;
}

int maximum_possible(int val1, int val2, int freq1, int freq2, int k)
{
    if(val1 * freq1 + val2 * freq2 <= k) return val1 * freq1 + val2 * freq2;
    else
    {
        int mult = min(k/val1, freq1);
        int ans = mult * val1;
        if(freq2)
        {
            // cout << "this loop ";
            int mult2 = binSearch(freq2, val2, k - (mult * val1));
            ans  += (mult2 * val2);

            if(ans < k && (freq2 > mult2))
            {
                ans += min(k - ans, min((mult), (freq2 - mult2)));
            }
        }

        return ans;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k, ans = 0; cin >> n >> k;
        vector<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        map<int, int> mp;
        for(int i = 0; i < n; ++i)
        {
            mp[a[i]] = b[i];
        }

        for(int i : a)
        {
            ans = max(ans, maximum_possible(i, i+1, mp[i], mp[i + 1], k));
        }

        cout << ans << '\n';
    }

    return 0;
}