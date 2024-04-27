#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void rec(int n)
{
    if(n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    if(n%2) 
    {
        cout << n << " ";
        rec(3*n + 1);
    }

    else
    {
        cout << n << " ";
        rec(n/2);
    }
}

int32_t main()
{
    int n; cin >> n;
    rec(n);

    return 0;
}