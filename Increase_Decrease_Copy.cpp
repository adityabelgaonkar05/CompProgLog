#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 1;
        vector<int> a(n);
        vector<int> b(n + 1);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        
        int clos = a[0];
        int last = b[n];
        int minel = abs(a[0] - last);
        int p = 0;

        for (int i = 1; i < a.size(); ++i) {
            int diff = abs(a[i] - last);
            if (diff < minel) {
                minel = diff;
                clos = a[i];
                p = i;
            }

            if(diff == minel)
            {
                if(abs(b[n] - b[i]) < abs(b[n] - b[p]))
                {
                    p = i;
                }
            }
        }

        if((b[p] <= b[n] && a[p] >= b[p] && a[p] <= b[n]) || (b[p] >= b[n] && a[p] <= b[p] && a[p] >= b[n])) 
        {
            a.push_back(a[p]);
        }

        else
        {
            int closest = min(abs(a[p] - b[p]), abs(a[p]- b[n]));
            ans += closest;
            if(closest == abs(a[p] - b[p])) a[p] = b[p];
            else a[p] = b[n];
            a.push_back(a[p]);
        }

        for(int i = 0; i <= n; ++i)
        {
            ans += abs(a[i] - b[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}