#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if(a%2 == 0 && b%2 == 0)
        {
            cout << "YES" << endl;
        } 

        else if((double)a/2 == (double)b || (double)b/2 == (double)a)
        {
            cout << "NO" << endl;
        }

        else if(a%2 != 0 && b%2 != 0)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }
}