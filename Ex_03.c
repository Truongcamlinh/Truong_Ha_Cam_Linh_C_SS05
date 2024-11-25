#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n;)
    {
        sum += i++;
    }

    printf("%d", sum);
}