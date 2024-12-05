#include <stdio.h>
int main()
{
    int a = 5, b = 10, c = 15;
    int result = (a > b ? (b > c ? b : c) : (a < c ? a : c)) + (a++, --b, c++);
    printf("%d %d %d %d\n", result, a, b, c);
    return 0;
}