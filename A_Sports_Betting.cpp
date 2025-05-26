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

        map<int, int> mp;
        int ans = 0;

        for (auto i : a)
        {
            mp[i]++;
            if (mp[i] >= 4)
            {
                ans = 1;
                break;
            }
        }

        if (ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}