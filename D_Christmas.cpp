#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n, x; cin >> n >> x;
    vector<pair<int, int>> b;
    b.push_back({2, 3});
    for(int i = 1; i < n; ++i)
    {
        b.push_back(b[i-1].first*2 + 2, b[i-2].first*2 + 1);
    }
    

    

    return 0;
}