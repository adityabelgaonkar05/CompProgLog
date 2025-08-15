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
        int x;
        cin >> x;

        string s;
        cin >> s;

        int left = 1;
        int right = 1;

        for (int i = x - 1; i >= 0; --i)
        {
            if (s[i] == '#')
            {
                left += i + 1;
                break;
            }
        }

        for (int i = x - 1; i < n; ++i)
        {
            if (s[i] == '#')
            {
                right += n - i + 1;
            }
        }

        if (left < right && left < x)
        {
            left++;
        }
        else if (right < left && right < n - x)
        {
            right++;
        }

        cout << min(left, right) << '\n';
    }

    return 0;
}