#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
#define f0n for(int i = 0; i < n; ++i)
using namespace std;

int32_t main()
{
    int n; cin >> n;
    map<int, int> mp;
    f0n
    {
        int el1, el2; cin >> el1 >> el2;
        mp[el1]++; mp[el2]--;
    }

    int maxel = 0, c = 0;
    for(auto x : mp)
    {
        c+=x.second;
        maxel = max(maxel, c);
    }

    cout << maxel << endl;

    return 0;
}