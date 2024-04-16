#include<bits/stdc++.h>
#define int unsigned long long
#define ab adityabelgaonkar
using namespace std;

void binary(int n)
{
    if(n == 0) return;
    
    binary(n/2);
    cout<<n%2;
}

int32_t main()
{
    binary(999999999999999999);

    return 0;
}