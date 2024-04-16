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
        int sum = 0; n--;
        while(n--) 
        {
            int el; cin >> el;
            sum+=el;
        }

        cout << 0-sum << endl;
    }

    return 0;
}