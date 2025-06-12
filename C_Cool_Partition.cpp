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
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ans = 0;

        set<int> curr;
        set<int> prev;

        for (int i = 0; i < n; ++i)
        {
            curr.insert(a[i]);
            int prevt = 1;

            for (auto i : prev)
            {
                if (curr.find(i) == curr.end())
                {
                    prevt = 0;
                    break;
                }
            }

            if (prevt)
            {
                prev = curr;
                curr.clear();
                ans++;
            }
        }

        int prevt = 1;

        for (auto i : prev)
        {
            if (curr.find(i) == curr.end())
            {
                prevt = 0;
                break;
            }
        }

        if (prevt)
        {
            // prev = curr;
            // curr.clear();
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}