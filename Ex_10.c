#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int reversed = 0;
    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    while (reversed != 0)
    {
        printf("%d\t", reversed % 10);
        reversed /= 10;
    }
    return 0;
}
