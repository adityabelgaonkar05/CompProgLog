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
        if (n >= 5)
        {
            vector<int> ans;

            for (int i = 2; i <= n; i += 2)
            {
                if (i == 4)
                    continue;
                ans.push_back(i);
            }

            ans.push_back(4);
            ans.push_back(5);

            for (int i = 1; i <= n; i += 2)
            {
                if (i == 5)
                    continue;
                ans.push_back(i);
            }

            for (auto i : ans)
                cout << i << ' ';
            cout << '\n';
        }

        else
            cout << -1 << '\n';
    }

    return 0;
}