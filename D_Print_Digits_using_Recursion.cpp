#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

string s;

void digits(int n)
{
    if(n == 0) return;
    int x = n%10;
    digits(n/10);
    cout << x << " ";
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n != 0) {digits(n);}
        else cout << 0;
        cout << "\n";
    }

    return 0;
}