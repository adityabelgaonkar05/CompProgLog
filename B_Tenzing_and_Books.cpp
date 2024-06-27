#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

vector<int> retsetbits(int n)
{
    vector<int> ans;

    for(int i = 31; i >= 0; --i)
    {
        if((1 << i) & n) ans.push_back(i);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        for(auto &i : c) cin >> i;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());

        vector<int> setbits;

        for(int i = 31; i >= 0; --i)
        {
            if((1 << i) & x) setbits.push_back(i);
        }

        reverse(setbits.begin(), setbits.end());

        vector<int> tempsetbits;

        int ans = 0;
        bool cond = 1;

        while(ans != x && cond)
        {
            cond = 0;
            if(a.back() > x && b.back() > x && c.back() > x) break;
            if(a.back() <= x)
            {
                tempsetbits = retsetbits(a.back());
                if(includes(setbits.begin(), setbits.end(), tempsetbits.begin(), tempsetbits.end()))
                {
                    ans = ans | a.back();
                    a.pop_back();
                    cond = 1;
                }
            }

            if(b.back() <= x && !cond)
            {
                tempsetbits = retsetbits(b.back());
                if(includes(setbits.begin(), setbits.end(), tempsetbits.begin(), tempsetbits.end()))
                {
                    ans = ans | b.back();
                    b.pop_back();
                    cond = 1;
                }
            }

            if(c.back() <= x && !cond)
            {
                tempsetbits = retsetbits(c.back());
                if(includes(setbits.begin(), setbits.end(), tempsetbits.begin(), tempsetbits.end()))
                {
                    ans = ans | c.back();
                    c.pop_back();
                    cond = 1;
                }
            }

            if(!cond) break;
        }

        if(ans == x) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}