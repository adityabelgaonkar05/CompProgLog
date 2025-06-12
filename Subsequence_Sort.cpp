#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // or will always increase value

        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        // for every element see what smallest number is needed to be ORed for eahc number which is out of place

        int ans = 0;

        for (int i = 1; i < n; ++i)
        {
            if (a[i] < a[i - 1])
            {
                for (int j = 30; j >= 0; --j)
                {
                    int setim1 = (a[i - 1] & (1ll << j));
                    int seti = (a[i] & (1ll << j));

                    if (setim1 && !seti)
                    {
                        ans = max(ans, setim1);
                        break;
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
