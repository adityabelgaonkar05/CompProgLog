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
        vector<int> a(n);
        vector<int> b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int score = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] > b[i])
            {
                a.pop_back();
                a.insert(a.begin(), b[i]);
                score++;
            }
        }

        cout << score << "\n";
    }

    return 0;
}