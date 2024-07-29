#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int largest = 0;
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) {cin >> a[i]; largest = max(largest, a[i]);}
        map<int, int> mp;
        vector<int> op;

        int c = 0;
        while(c < 40)
        {
            int templargest = largest/2;
            op.push_back(templargest);
            largest = 0;
            mp[0] = 0;

            for(int i = 0; i < n; ++i)
            {
                a[i] = abs(a[i] - templargest);
                largest = max(largest, a[i]);
                if(a[i] == 0) mp[0]++;
            }

            if(mp[0] == n) break;
            c++;
        }

        if(mp[0] != n) cout << -1 << '\n';
        else
        {
            cout << op.size() << '\n';
            for(int i = 0; i < op.size(); ++i) cout << op[i] << ' ';
            cout << '\n';
        }
    }

    return 0;
}