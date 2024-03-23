#include<bits/stdc++.h>
#define int long long
using namespace std;

int sumofdigits(int n)
{   
    int temp = n, sum = 0;
    while(temp)
    {
        sum += temp%10;
        temp/=10;
    }

    return sum;
}

int32_t main()
{
    int k; cin >> k;
    int i = 10;
    while(k)
    {
        i+=9;
        if(sumofdigits(i) == 10) k--;
    }

    cout << i << endl;
    return 0;
}