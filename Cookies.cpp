#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;

    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> vec(n);
        for(int i = 0; i < n; ++i) cin >> vec[i];

        sort(vec.begin(), vec.end());
        int count = 0, curr = 0;

        for(int i = 0; i < n; ++i)
        {
            curr+=vec[i];
            if(curr > k) break;

            count++;
        }

        cout << count << endl;
    }

    return 0;
}