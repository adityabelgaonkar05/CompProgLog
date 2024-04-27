#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int fib(int n, int i, int curr, int prev1, int prev2)
{
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(i == n-1) return curr;
    return fib(n, i+1, curr + prev1, curr, prev1);
}

int32_t main()
{
    int n; cin >> n;
    cout << fib(n, 0, 0, 1, 0);

    return 0;
}