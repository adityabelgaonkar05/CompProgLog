#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int bin1count(int n)
{
    if(n == 0) return 0;
    return n%2 + bin1count(n/2);
}

int32_t main()
{
    int n; cin >> n;
    cout << bin1count(n); 

    return 0;
}