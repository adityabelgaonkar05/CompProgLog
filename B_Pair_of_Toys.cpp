#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n, k; cin >> n >> k;

    if(k >= n*2  || k == 0) cout << 0;
    else if(k <= n) k%2 ? cout << k/2 : cout << k/2-1;
    else
    {
        int smallest = k - n;
        int largest = k - smallest;
        cout << (int)(ceil(largest/2.0 - smallest/2.0));
        
    };
    return 0;
}