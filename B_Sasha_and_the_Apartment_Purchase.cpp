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
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        set<int> s;
        map<int, int> mp;

        for (auto &i : b)
        {
            cin >> i;
            mp[i]++;
            s.insert(i);
        }

        vector<int> pref;
        vector<int> suff;

        sort(b.begin(), b.end());

        pref.push_back(0);

        int sum = 0;

        // multiset<int> answers;
        vector<int> a(s.begin(), s.end());

        for (int i = 1; i < a.size(); ++i)
        {
            sum += abs(a[0] - a[i]) * mp[a[i]];
        }

        suff.push_back(sum);
        int sumfreq = 0;

        for (int i = 1; i < a.size(); ++i)
        {
            sumfreq += mp[a[i - 1]];
            int x = abs(a[i] - a[i - 1]) * sumfreq;
            int y = abs(a[i] - a[i - 1]) * (n - sumfreq);
            pref.push_back(x + pref.back());
            suff.push_back(suff.back() - y);
        }

        for (int i = 0; i < pref.size(); ++i)
        {
            cout << pref[i] << ' ' << suff[i] << '\n';
        }

        cout << '\n';
    }

    return 0;
}