// C++ program to find log(a) on any base b
#include <bits/stdc++.h>
using namespace std;

int log_a_to_base_b(int a, int b)
{
	return ceil(log2(a) / log2(b));
}

// Driver code
int main()
{
	int a = 6;
	int b = 3;
	cout << log_a_to_base_b(a, b) << endl;

	return 0;
}

// This code is contributed by shubhamsingh10, yousefonweb
