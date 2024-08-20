#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        deque<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        bool cond = 0;

        while(a.size() != 1)
        {
            if((a.back() != b.back() && a.back() != b.front()) || (a.front() != b.back() && a.front() != b.front())) {cond = 1; break;}
            else if(a.back() == b.back())
            {
                a.pop_back();
                b.pop_back();
            }

            else if(a.back() == b.front())
            {
                a.pop_back();
                b.pop_front();
            }

            else if(a.front() == b.back())
            {
                a.pop_front();
                b.pop_back();
            }

            else if(a.front() == b.front())
            {
                a.pop_front();
                b.pop_front();
            }
        }

        if(cond) cout << "Alice\n";
        else cout << "Bob\n";
    }

    return 0;
}