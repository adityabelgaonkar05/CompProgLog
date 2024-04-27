#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int maxsize = 2e5 + 10;
vector<int> a(maxsize, 0);

int32_t main()
{
    int n; cin >> n;
    for(int i = 1; i < n; ++i)
    {
        int el; cin >> el;
        a[el] = 1;
    }

    for(int i = 1; i <= n; ++i)
    {
        if(a[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}