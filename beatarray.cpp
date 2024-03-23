#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        
        int sumofdiff = 0;
        for(int i = 1; i < n; i++)
        {
            sumofdiff += a[i] - a[i-1];
        }
        
        cout << sumofdiff << endl;
    }

    return 0;
}
