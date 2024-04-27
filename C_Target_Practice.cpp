#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<string> a(10);
        int score = 0;
        for(auto &i : a) cin >> i;
        for(int i = 0; i < 10; ++i)
        {
            for(int j = 0; j < 10; ++j)
            {
                if(a[i][j] == 'X')
                {
                    int minterm = min(i, j);
                }
            }
        }

        cout << score << "\n";
    }

    return 0;
}