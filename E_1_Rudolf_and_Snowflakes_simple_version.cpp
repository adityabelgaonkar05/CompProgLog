#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> poss(1000030);

    for (int i = 2; i < 1000; ++i)
    {
        int sum = 1 + i + i * i;
        poss[sum] = 1;

        int powe = 3;

        while (sum < 1000000)
        {
            poss[sum] = 1;
            sum += pow(i, powe++);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (poss[n])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}