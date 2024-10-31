#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &price, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int maxi = price[0];
    int ans = 0;

    for (int i = 1; i < n; ++i)
    {
        if (price[i] <= maxi)
        {
            ans = max(ans, maxi - price[i]);
        }

        else
        {
            maxi = price[i];
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    cout << solve(price, n);
}