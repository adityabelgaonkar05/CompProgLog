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

    // sort(a.begin(), a.end());

    map<int, int> mp;
    mp[a[0]]++;

    int maxlen = 1;

    int right = 1;
    int left = 0;

    while (right < n)
    {
        if (mp[a[right]])
        {
            while (mp[a[right]])
            {
                mp[a[left]] = 0;
                left++;
            }

            mp[a[right]] = 1;
        }

        else
        {
            mp[a[right]] = 1;
        }

        maxlen = max(maxlen, right - left + 1);
        right++;
    }

    cout << maxlen << '\n';

    return 0;
}