#include <stdio.h>
#include <conio.h>
int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n = 20 ;
    printf("So Fibonacci thu 20 la: %d", Fibonacci(n));
    return 0;
}
