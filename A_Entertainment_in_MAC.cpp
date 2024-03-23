#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        bool rev = 1;

        string newer_s = s;
        reverse(newer_s.begin(), newer_s.end());
        if(newer_s>=s) rev = 0;

        if(rev)
        {
            if(n%2)
            {
                reverse(s.begin(), s.end());
                cout << s << endl;
            }

            else
            {
                string new_s = s;
                reverse(new_s.begin(), new_s.end());
                cout << new_s << s << endl;
            }
        }

        else
        {
            if(n%2)
            {
                string new_s = s;
                reverse(new_s.begin(), new_s.end());
                cout << s << new_s << endl;
            }

            else
            {
                cout << s << endl;
            }
        }
    }
    return 0;
}