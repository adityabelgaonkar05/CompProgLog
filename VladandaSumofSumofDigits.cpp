#include <bits/stdc++.h>
#define int long long
using namespace std;

int two105 = 2 * 1e6;
int arr[210000];

int sumofdigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int32_t main()
{

    arr[0] = 0;
    for(int i = 1; i <= 200000; ++i)
    {
        arr[i] = arr[i-1] + sumofdigits(i);
    }

    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        cout << arr[n] << endl;
    }

    return 0;
}