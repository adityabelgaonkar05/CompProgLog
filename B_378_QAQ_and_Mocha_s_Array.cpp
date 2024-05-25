#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int secondsmallest(vector<int> a, int sm)
{
    int ss = INT_MAX;
    ss += 1000;

    int check = ss;

    for(auto i : a)
    {
        if(i != sm && i%sm != 0) ss = min(ss, i);
    }

    if(ss != check) return ss;
    else return sm;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        bool flag = 0;

        int ai = *min_element(a.begin(), a.end());
        int aj = secondsmallest(a, ai);

        for(int i = 0; i < n; ++i)
        {
            if(a[i]%ai != 0 && a[i]%aj != 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag) cout << "No" << "\n";
        else cout << "Yes" << "\n";
    }

    return 0;
}