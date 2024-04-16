#include <bits/stdc++.h>
using namespace std;

int palindrome(int x) {
    string reversed = "0x" + x;
    reverse(reversed.begin(), reversed.end());

    return (reversed, 0, reversed);
} 

int main() {
    int n = 1939;
    cout << palindrome(n);
}