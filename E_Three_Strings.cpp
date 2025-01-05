#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        int l = 0, r = 0;
        int k = 0;
        int ans = 0;
        map<char, int> mp;

        for (char i : c)
            mp[i]++;

        while (k < c.size() && l < a.size() && r < b.size())
        {
            if (c[k] == a[l])
            {
                mp[a[l]]--;
                l++;
            }

            else if (c[k] == b[r])
            {
                mp[a[r]]--;
                r++;
            }

            else
            {
                if (mp[a[l]] >= mp[b[r]])
                {
                    mp[b[r]]--;
                    r++;
                }
                else
                {
                    mp[a[l]]--;
                    l++;
                }

                ans++;
            }

            k++;
        }

        while (l < a.size())
        {
            if (c[k++] != a[l++])
            {
                ans++;
            }
        }

        while (r < b.size())
        {
            if (c[k++] != b[r++])
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}