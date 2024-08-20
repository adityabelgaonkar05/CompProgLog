#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int maximumpass(int f1, int f2, int val1, int val2, int k)
{
    int ans = val2 * f2 + val1 * f1;
    if(ans <= k) return ans;
    else
    {
        int curr = min(val1 * f1, (k/val1) * val1);
        if(curr == k) return curr;
        
        int count1 = min(f1, (k/val1));
        int count2 = 0;

        while(curr <= k && count2 < f2)
        {
            if(curr == k) return curr;
            if(curr + val2 <= k)
            {
                curr += val2;
                count2++;
            }
            else if(count1)
            {
                curr++;
                count2++;
                count1--;
            }
            else break;
        }

        return curr;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        set<int> b;
        map<int, int> mp;
        for(int i = 0; i < n; ++i) {cin >> a[i]; mp[a[i]]++; b.insert(a[i]);}
        int ans = 0;

        for(int i : b)
        {
            int f2 = mp[i + 1];
            int res = maximumpass(mp[i], f2, i, i + 1, k);
            ans = max(ans, res);
        }

        cout << ans << '\n';
    }

    return 0;
}