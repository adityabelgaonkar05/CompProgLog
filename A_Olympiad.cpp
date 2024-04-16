#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
#define f0n for(int i = 0; i < n; ++i)
using namespace std;

int32_t main()
{
    int n; cin >> n;
    set<int> s;
    f0n
    {
        int temp; cin >> temp;
        if(temp != 0) s.insert(temp);
    }

    cout << s.size() << endl;

    return 0;
}