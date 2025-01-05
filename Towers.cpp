#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    multiset<int> tops;

    for (auto i : a)
    {
        auto it = tops.upper_bound(i);
        if (it == tops.end())
        {
            tops.insert(i);
            continue;
        }

        tops.erase(it);
        tops.insert(i);
    }

    cout << tops.size() << '\n';

    return 0;
}