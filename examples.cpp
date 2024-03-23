#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
    {
        if(n%3 == 0 && n%5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        
        else if(n%3 == 0)
        {
            cout << "Fizz" << endl;
        }
        
        else if(n%5 == 0)
        {
            cout << "Buzz" << endl;
        }
        
        else
        {
            cout << i << endl;
        }
    }
    
    return 0;
}