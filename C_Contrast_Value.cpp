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

        auto it = unique(a.begin(), a.end());
        a.erase(it, a.end());

        n = a.size();

        int absdiff = 0;
        for(int i = 0; i < n-1; ++i)
        {
            absdiff += abs(a[i] - a[i+1]);
        }

        if(absdiff == 0) cout << 1 << "\n";

        else 
        {
            bool inc = 0;
            if(a[0] < a[1]) inc = 1;
            int count = a.size();

            for(int i = 1; i < n - 1; ++i)
            {
                if(inc)
                {
                    if(a[i] <= a[i+1]) count--;
                    else inc = 0;
                }

                else
                {
                    if(a[i] >= a[i+1]) count--;
                    else inc = 1;

                }
            }

            cout << count << "\n";
        }
    }

    return 0;
}