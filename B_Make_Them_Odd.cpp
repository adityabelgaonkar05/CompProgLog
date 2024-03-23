#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int> s;
        for(int i = 0; i < n; ++i)
        {
            int el; cin >> el;
            s.insert(el);
        }

        for(auto x : s)
        {
            if(x%2 == 0)
            {
                int temp = x;
                while(temp%2 == 0)
                {
                    temp/=2;
                    s.insert(temp);
                }
            }
        }

        int cnt = 0;
        for(auto x : s)
        {
            if(x%2 == 0) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}