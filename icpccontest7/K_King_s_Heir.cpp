#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

struct date
{
    int day, month, year;
};

void solve()
{
    date og;
    cin >> og.day >> og.month >> og.year;
    int n;
    cin >> n;

    vector<date> a(n);
    int ans = 0;
    for (auto &i : a)
        cin >> i.day >> i.month >> i.year;

    for (auto i : a)
    {
        if (i.year == (og.year - 18) && i.month == og.month && i.day <= og.day)
        {
            ans++;
        }

        else if (i.year == (og.year - 18) && i.month < og.month)
        {
            ans++;
        }

        else if (i.year < (og.year - 18))
        {
            ans++;
        }
    }

    if (ans)
        cout << ans << '\n';
    else
        cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("king.in", "r", stdin);
    freopen("king.out", "w", stdout);

    // ll test = 1;
    // cin >> test;
    // while (test--)
    // {
    solve();
    // }

    return 0;
}