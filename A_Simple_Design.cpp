#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int sum_of_digits(int n)
{
    int sum = 0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, k; cin >> x >> k;
        while(sum_of_digits(x)%k)
        {
            x++;
        }

        cout << x << "\n";
    }

    return 0;
}