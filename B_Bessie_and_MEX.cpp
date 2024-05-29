#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int recalculatemex(vector<int> ans)
{
    set<int> s(ans.begin(), ans.end());
    int c = 0;

    // cout << "set: ";
    // for(auto i : s) cout << i << " ";
    // cout << "\n";

    for(auto i : s)
    {
        if(i != c) return c;
        c++;
    }

    return c;
}

int32_t main()
{
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        vector<int> ans;
        if(a[0] > 0) ans.push_back(0);
        else ans.push_back(abs(a[0]));

        int mex = recalculatemex(ans);
        // cout << ans[0] << " mex: " << mex << " ";

        for(int i = 1; i < n; ++i)
        {
            mex = recalculatemex(ans);
            ans.push_back(mex - a[i]);
            // cout << mex - a[i] << " mex: " << mex << " ";
        }

        for(auto i : ans) cout << i << " ";
        cout << "\n";
    }

    return 0;
}


//mexsofar(ans) - a[i] = ans[i]