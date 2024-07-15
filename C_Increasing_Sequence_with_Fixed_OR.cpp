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
            int n; cin >> n;
            vector<int> setbits;
            int counter = 0;
            int temp = n;

            if(n & (n - 1))
            {
                while(temp > 0)
                {
                    if(temp & 1) setbits.push_back(counter);
                    counter++;
                    temp = temp >> 1;
                }

                vector<int> ans = {n};
                for(int i : setbits)
                {
                    int p = n ^ (1ll << i);
                    if(p > 0) ans.push_back(p);
                }

                cout << ans.size() << '\n';
                for(int i = ans.size() - 1; i >= 0; --i) if(ans[i] != 0) cout << ans[i] << ' ';
                cout << '\n';
            }

            else cout << "1\n" << n << '\n';
        }

        return 0;
    }