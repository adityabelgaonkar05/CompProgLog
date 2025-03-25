#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int makechanges(vector<int> &a, int ind, bool &cond)
{
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;

        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (mp[a[j]] >= 3)
                {
                    mp[a[j]]--;
                    mp[a[j] + 1]++;
                    a[j]++;
                }
            }

            sort(a.begin(), a.end());
        }

        bool cond = 1;

        for (int i : a)
        {
            // cout << i << ' ';
            cond &= (!(mp[i] & 1));
        }

        if (cond)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}