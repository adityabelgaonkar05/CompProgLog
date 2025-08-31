#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        set<int> ss;
        for (int i = 1; i <= n; ++i)
            ss.insert(i);

        vector<int> ans(n);

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                ans[i] = *ss.begin();
                ss.erase(ss.begin());
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                ans[i] = *ss.begin();
                ss.erase(ss.begin());
            }
        }

        bool poss = 1;
        int ind = max_element(ans.begin(), ans.begin() + k) - ans.begin();
        if (s[ind] == '1')
        {
            poss = 0;
        }

        for (int i = 1; i <= n - k; ++i)
        {
            if (s[i + k - 1] == '0')
            {
                ind = i + k - 1;
            }
            if (ind < i)
            {
                poss = 0;
                break;
            }
        }

        if (!poss)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}