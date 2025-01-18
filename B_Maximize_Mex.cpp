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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        int mex = 0;

        multiset<int> extras;
        map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == mex)
                mex++;
            if (mp[a[i]])
            {
                extras.insert(a[i]);
            }
            else
                mp[a[i]]++;

            if (a[i] > mex || i == (n - 1))
            {
                while ((mex != a[i]) && extras.size())
                {
                    bool handled = 0;
                    for (auto it = extras.begin(); it != extras.end(); it++)
                    {
                        if (((mex - *it) % x) == 0)
                        {
                            extras.erase(it);
                            mex++;
                            handled = 1;
                            break;
                        }
                    }

                    if (!(handled))
                        break;
                }

                if (mex != a[i])
                    break;
            }
        }

        cout << mex << '\n';
    }

    return 0;
}