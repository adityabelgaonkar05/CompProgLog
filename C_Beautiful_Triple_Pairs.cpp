#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int count = 0;
        // vector<vector<int>> b;

        // for(int i = 0; i < n-2; ++i)
        // {
        //     b.push_back({a[i], a[i+1], a[i+2]});
        // }

        // cout << "sjadlajsd" << "\n";
        // for(auto i : b) {for(auto j : i) cout << j << " "; cout << "\n";}

        for(int i = 0; i < a.size()-3; ++i)
        {
            for(int j = i+1; j < a.size()-2; ++j)
            {
                if(a[i] != a[j] && a[i+1] == a[j+1] && a[i+2] == a[j+2])
                {
                    count++;
                }
                else if(a[i] == a[j] && a[i+1] != a[j+1] && a[i+2] == a[j+2])
                {
                    count++;
                }
                else if(a[i] == a[j] && a[i+1] == a[j+1] && a[i+2] != a[j+2])
                {
                    count++;
                }
            }   
        }

        cout << count << "\n";
    }

    return 0;
}