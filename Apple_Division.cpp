#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void recursion(int ind, vector<int> &a, vector<int> taken, int &ans)
{
    if (ind == a.size())
    {
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < a.size(); ++i)
        {
            if (taken[i])
                sum1 += a[i];
            else
                sum2 += a[i];
        }

        ans = min(ans, abs(sum1 - sum2));

        return;
    }

    recursion(ind + 1, a, taken, ans);
    taken[ind] = 1;
    recursion(ind + 1, a, taken, ans);
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int ans = INT64_MAX;

    vector<int> taken(n);

    recursion(0, a, taken, ans);

    cout << ans << '\n';

    return 0;
}