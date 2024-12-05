#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> mp;
    for (int i = 0; i < 4; ++i)
    {
        int el;
        cin >> el;
        mp[el]++;
    }

    for (int i = 1; i < 6; ++i)
    {
        if (mp[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}