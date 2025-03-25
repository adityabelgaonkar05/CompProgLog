#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

string func(string s)
{
    string ans = "";

    int currvow = 0;
    int currcons = 0;

    for (char i : s)
    {
        if (i == 'a' || i == 'e' || i == 'o' || i == 'i' || i == 'u')
        {
            currvow++;
        }

        else
            currcons++;
    }

    int l = 0;
    int r = s.size() - 1;

    while (l <= r)
    {
        if (currcons >= 2 * currvow)
        {
            string ans(s.begin() + l, s.end() - r - 1);
            return ans;
        }

        else
        {
            if (s[l] == 'a' || s[l] == 'e' || s[l] == 'o' || s[l] == 'i' || s[l] == 'u')
            {
            }
        }
    }

    return "-1";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        cout << func(s) << endl;
    }

    return 0;
}