#include <stdio.h>

int gcd(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return tmp;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));
}