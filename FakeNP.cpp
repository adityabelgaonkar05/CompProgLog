#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    time_t times, timend;

    int l, r; cin >> l >> r;
    time(&times);
    l == r ? cout << l << endl : cout << 2 << endl;
    time(&timend);

    double time_taken = double(timend - times);

     cout << "Time taken by program is : " << fixed 
        << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0;
}