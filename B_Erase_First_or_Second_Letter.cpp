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
        deque<char> s;
        map<char, int> mp;
        string s1;
        cin >> s1;
        for (int i = 0; i < n; ++i)
        {
            s.push_back(s1[i]);
            // mp[s1[i]]++;
        }
        int ans = 0;

        while (s.size())
        {
            if (mp[s[0]] == 0)
            {
                ans += (s.size());
                mp[s[0]]++;
            }
            s.pop_front();
        }

        cout << ans << '\n';
    }

    return 0;
}