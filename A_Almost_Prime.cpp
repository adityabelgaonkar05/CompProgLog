// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define int long long
#define ab adityabelgaonkar
using namespace std;

vector<int> primefacts(int n)
{
    vector<int> a;
    for(int i = 2; i*i <= n; ++i)
    {
        if(n%i == 0) a.push_back(i);
        while(n%i == 0)
        {
            n/=i;
        }
    }

    if(n > 1) a.push_back(n);

    return a;
}

int32_t main()
{
    int n; cin >> n;
    int ans = 0;

    for(int i = 1; i <= n; ++i)
    {
        vector<int> a = primefacts(i);
        if(a.size() == 2) 
        {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}