#include<bits/stdc++.h>
#define int long long
using namespace std;

int removemax(int n)
{
    int h = 1;
    while(3*(h*(h+1)/2) - h < n)
    {
        h++;
    }

    if(n < 3*(h*(h+1)/2) - h) h--;
    return 3*(h*(h+1)/2) - h;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int h = 0, pyramids = 0;
        int temp;
        while(n > 1)
        {
            temp = removemax(n);
            n = n - temp;
            pyramids++;
        }

        cout << pyramids << endl;
    }

    return 0;
}