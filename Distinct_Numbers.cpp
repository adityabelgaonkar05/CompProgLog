#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n; cin >> n;
    set<int> s; 
    while(n--)
    {
        int el; cin >> el;
        s.insert(el);
    }

    cout << s.size() << endl;

    return 0;
}