#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, count = 0; cin >> n;
        string s; cin >> s;

        int i = 0;
        if(n>4)
        {
            while(i < n-4)
            {
                if(s.substr(i, 5) == "mapie") 
                {
                    count++;
                    i+=5;
                }

                else if(s.substr(i, 3) == "pie")
                {
                    count++;
                    i+=3;
                }

                else if(s.substr(i, 3) == "map")
                {
                    count++;
                    i+=3;
                }

                else i++;
            }

            if(s.substr(n-4, 3) == "map" || s.substr(n-4, 3) == "pie") count++;

            cout << count << endl;
        }

        else cout << 0 << endl;
    }
    return 0;
}