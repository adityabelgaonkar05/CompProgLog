#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int fact(int n)
{
    if(n == 1) return 1;
    return (n%1000000000 * fact(n-1)%1000000000)%1000000000;
}

int32_t main()
{
    int n; cin >> n;
    int ans = 0;
    int factorial = fact(n);
    while(factorial%10 == 0) 
    {
        ans++;
        factorial/=10;
    }

    cout << ans;

    return 0;
}