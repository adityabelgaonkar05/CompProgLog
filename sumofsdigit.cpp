#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int n)
{
    int sum = n;

    while(sum >= 10)
    {
        sum = 0;

        while(n > 0)
        {
            sum += n % 10;
            n /= 10;
        }

        n = sum;
    }

    return sum;
}

int main()
{
    for(int i = 0; i < 100; ++i) cout << sumofdigits(i) << endl;
}