#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

vector<int> getResources(int inc, int dec, vector<int> performance)
{
    int n = performance.size();
    vector<int> jk;
    map<int, int> mp;

    for (auto i : performance)
    {
        if (!mp[i])
            jk.push_back(i);
        mp[i]++;
    }

    sort(jk.begin(), jk.end());

    vector<int> ans;
    for (auto i : performance)
    {
        int rank = lower_bound(jk.begin(), jk.end(), i) - jk.begin();
        cout << rank << ' ' << mp[i] << '\n';
        int topush = inc * (n + 1 - (jk.size() - rank)) - dec * mp[i];
        ans.push_back(topush);
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int inc, dec;
    cin >> inc >> dec;
    vector<int> performance(n);

    for (auto &i : performance)
    {
        cin >> i;
    }

    vector<int> ans = getResources(inc, dec, performance);

    for (auto &i : ans)
        cout << i << ' ';

    return 0;
}