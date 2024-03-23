#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main()
{
  int a, b, n; cin >> a >> b >> n;
  int check = max(a,b), curr = 0;
  int count = 1;
  
  for(int i = n/2-1; i < n; ++i)
  {
    if(n-i-1 + curr <= check)
    {
      count++;
      curr += n-i-1;
    }
  }
 
 cout << count << endl;
}