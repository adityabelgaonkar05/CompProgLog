#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int nmax = 1000000;
vector<int> prec(nmax);
bool singledigit(int i)
{
    string s = to_string(i);
    int c = 0;
    for(auto x : s) if(x == '0') c++;
    if(c >= s.size()-1) return 1;
    return 0;
}

int32_t main()
{
    int tracker = 0;
    for(int i = 1; i < nmax; ++i)
    {
        string is = to_string(i);
        if(singledigit(i)) tracker++;
        prec[i] = tracker;
    }

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << prec[n] << endl;
    }

    return 0;
}