#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    string s; cin >> s;
    int n = s.size();
    int curr = 1;
    int maxel = 1;

    for(int i = 1; i < n; ++i)
    {
        if(s[i] == s[i-1])
        {
            curr++;
            maxel = max(maxel, curr);
        }
        else curr = 1;
    }

    cout << maxel;

    return 0;
}