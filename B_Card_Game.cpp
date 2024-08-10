#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int ans = 0;

        int currwin = 0, currloss = 0;
        
        if(a > c) currwin++;
        else if(a < c) currloss++;
        if(b > d) currwin++;
        else if(b < d) currloss++;
        if(currwin > currloss) ans++;

        currwin = 0; currloss = 0;
        if(a > d) currwin++;
        else if(a < d) currloss++;
        if(b > c) currwin++;
        else if(b < c) currloss++;
        if(currwin > currloss) ans++;

        currwin = 0; currloss = 0;
        if(b > c) currwin++;
        else if(b < c) currloss++;
        if(a > d) currwin++;
        else if(a < d) currloss++;
        if(currwin > currloss) ans++;

        currwin = 0; currloss = 0;
        if(b > d) currwin++;
        else if(b < d) currloss++;
        if(a > c) currwin++;
        else if(a < c) currloss++;
        if(currwin > currloss) ans++;

        cout << ans << '\n';
    }

    return 0;
}
