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
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        sort(a.begin(), a.end());
        int currmod = a[0];

        for(int i = 1; i < n; ++i)
        {
            if(currmod % a[i] == 0)
            {
                bool flag = 0;
                for(int j = i; j < n; ++j)
                {
                    if(a[j] % a[i]) {swap(a[j], a[i]); flag = 1;}
                }

                if(flag == 0) {currmod = 0; break;}
            }

            currmod %= a[i];
        }

        for(auto i : a) cout << i << ' ';
        cout << "\n";

        if(currmod) cout << "YES" << "\n";
        else cout << "NO" << '\n';
    }

    return 0;
}