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
        string s;
        cin >> s;

        // one of the non border characters must repeat

        map<char, int> mp;
        mp[s[0]]++;
        mp[s.back()]++;
        bool poss = 0;

        for (int i = 1; i < n - 1; ++i)
        {
            if (mp[s[i]])
            {
                poss = 1;
                break;
            }
            mp[s[i]]++;
        }

        if (poss)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}