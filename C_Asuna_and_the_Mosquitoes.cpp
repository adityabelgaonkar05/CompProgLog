#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // try to make the largest even and odd numbers
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        if (n == 1)
            cout << a[0] << '\n';
        else
        {
            int largestodd = INT_MIN;
            int largesteven = INT_MIN;

            for (auto i : a)
            {
                if (i & 1)
                    largestodd = max(largestodd, i);
                else
                    largesteven = max(largesteven, i);
            }

            if (largesteven < 0 || largestodd < 0)
            {
                cout << max(largesteven, largestodd) << '\n';
            }

            else
            {
                sort(a.rbegin(), a.rend());

                int ans1 = largestodd;
                int ans2 = largesteven;
                int foundodd = 0;
                int foundeven = 0;

                for (auto i : a)
                {
                    if (i == largestodd && !foundodd)
                    {
                        foundodd = 1;
                        continue;
                    }

                    if (i == largesteven && !foundeven)
                    {
                        foundeven = 1;
                        continue;
                    }

                    if (i & 1)
                    {
                        ans2 += i - 1;
                    }

                    else
                        ans1 += i;
                }

                cout << ans1 + ans2 << '\n';
            }
        }
    }

    return 0;
}