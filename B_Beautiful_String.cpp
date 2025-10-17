#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
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
        string s;
        cin >> s;

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                ans.push_back(i + 1);
            }
        }

        cout << ans.size() << '\n';
        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}