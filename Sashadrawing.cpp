#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        //total possible = 4*n - 2
        
        if(k%2 == 0)
        {
            cout << k/2 << endl;
        }
        else
        {
            cout << (k+1)/2 << endl;
        }
    }

    return 0;
}
