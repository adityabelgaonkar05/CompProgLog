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
        int n;
        cin >> n;

        set<int> s;
        int ss = 0;

        // div 3 B got hands

        vector<int> ans;

        for (int k = 1; k <= 18; k++)
        {
            int d = 1;

            for (int i = 0; i < k; i++)
                d *= 10;
            d += 1;

            if (n % d == 0)
            {
                ans.push_back(n / d);
            }
        }

        sort(ans.begin(), ans.end());

        cout << ans.size() << "\n";

        for (auto i : ans)
            cout << i << " ";
        if (ans.size())
            cout << '\n';
    }

    return 0;
}