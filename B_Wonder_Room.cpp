#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n, a, b; cin >> n >> a >> b;
    if(6*n <= a*b) cout << a*b << "\n" << a << " " << b;
    else
    {
        while(a*b < 6*n)
        {
            if((a+1)*b < a*(b+1)) b++;
            else a++;
        }

        if((a-1)*(b+1) >= 6*n && (a-1)*(b+1) < a*b && (a-1)*(b+1) < (a+1)*(b-1)) cout << (a-1)*(b+1) << "\n" << a-1 << " " << b+1;
        else if((a+1)*(b-1) >= 6*n && (a+1)*(b-1) < a*b) cout << (a+1)*(b-1) << "\n" << a+1 << " " << b-1;
        else cout << a*b << "\n" << a << " " << b;
    }

    return 0;
}