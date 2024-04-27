#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

string converttobin(int n)
{
    string ans = "";
    while(n > 0)
    {
        ans+=to_string(n%2);
        n/=2;
    }

    return ans;
}

int32_t main()
{
    cout << converttobin(19000);

    return 0;
}