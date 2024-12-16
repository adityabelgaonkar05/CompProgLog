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
        int n;
        cin >> n;
        vector<pair<int, string>> lefts;
        vector<pair<int, string>> rights;
        vector<pair<int, string>> boths;

        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            string s;
            cin >> s;
            if (s == "11")
                boths.push_back({temp, s});

            else if (s == "10")
                lefts.push_back({temp, s});

            else if (s == "01")
                rights.push_back({temp, s});
        }

        sort(lefts.begin(), lefts.end());
        sort(rights.begin(), rights.end());
        sort(boths.begin(), boths.end());

        if ((!(lefts.size()) || !(rights.size())) && !(boths.size()))
        {
            cout << "-1\n";
        }

        else
        {
            int comb = INT64_MAX;
            int noncomb = INT64_MAX;

            if (boths.size())
                noncomb = boths[0].first;
            if (lefts.size() && rights.size())
                comb = lefts[0].first + rights[0].first;

            cout << min(noncomb, comb) << '\n';
        }
    }

    return 0;
}