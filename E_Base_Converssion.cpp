#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

string s;

void rec(int n)
{
    if(n == 0) return;
    string x = to_string(n%2);
    rec(n/2);
    s += x;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        rec(n);
        cout << s << "\n";
        s.clear();
    }

    return 0;
}