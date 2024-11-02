#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int count1543(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size() - 3; ++i)
    {
        if (s[i] == '1' && s[i + 1] == '5' && s[i + 2] == '4' && s[i + 3] == '3')
            ans++;
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (auto &i : a)
            cin >> i;

        int top = 0, left = 0, right = m - 1, bottom = n - 1;
        int ans = 0;

        while (top <= bottom && left <= right)
        {
            string s = "";

            for (int i = left; i <= right; ++i)
            {
                s.push_back(a[top][i]);
            }

            for (int i = top + 1; i <= bottom; ++i)
            {
                s.push_back(a[i][right]);
            }

            for (int i = right - 1; i >= left; --i)
            {
                s.push_back(a[bottom][i]);
            }

            for (int i = bottom - 1; i > top; --i)
            {
                s.push_back(a[i][left]);
            }

            top++;
            bottom--;
            left++;
            right--;

            if (s.size() > 1)
                s.push_back(s[0]);
            if (s.size() > 2)
                s.push_back(s[1]);
            if (s.size() > 3)
                s.push_back(s[2]);

            // cout << s << '\n';

            ans += count1543(s);
        }

        cout << ans << '\n';
    }

    return 0;
}