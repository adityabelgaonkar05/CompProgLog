#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //   int t;
    //   cin >> t;
    //   while (t--)
    //   {

    //   }
    int ans = 0;

    map<int, int> mp;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }

    vector<int> b;
    for (int i = 1; i < 14; ++i)
    {
        if (mp[i])
            b.push_back(mp[i]);
    }

    while (b.size() > 0)
    {
        sort(b.begin(), b.end());
        int tk = k;
        int pnt = b.size() - 1;
        while (tk > 0 && pnt >= 0)
        {
            if (tk < b[pnt])
            {
                pnt--;
                continue;
            }

            else
            {
                tk -= b[pnt];
                b.erase(b.begin() + pnt);
                pnt--;
            }
        }

        ans++;
    }

    cout << ans << '\n';

    return 0;
}