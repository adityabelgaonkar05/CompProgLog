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

    int MEX = 1;
    int sum = 0;
    sort(a.begin(), a.end());

    for (auto i : a)
    {
        if (i == MEX)
        {
            MEX++;
        }

        else if (i > MEX)
        {
            break;
        }

        sum += i;
    }

    cout << sum + 1 << '\n';

    return 0;
}