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
        string s = "codeforces";
        string s1;
        cin >> s1;
        int ans = 0;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (s[i] != s1[i])
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}