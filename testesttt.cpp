#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime (brute force)
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to count the number of divisors of n (optimized to sqrt(n))
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                cnt++; // perfect square: count only once
            else
                cnt += 2; // i and n/i are two distinct divisors
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            // Check if i is prime OR if the number of divisors of i is prime
            if (isPrime(i) || isPrime(countDivisors(i)))
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}
