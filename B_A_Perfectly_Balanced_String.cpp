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
        string s;
        cin >> s;
        bool cond = 1;

        set<char> ss;

        for (char i : s)
        {
            ss.insert(i);
        }

        for (int i = 0; i < s.size() - ss.size(); ++i)
        {
            if (s[i] != s[i + ss.size()])
            {
                cond = 0;
                break;
            }
        }

        if (cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}