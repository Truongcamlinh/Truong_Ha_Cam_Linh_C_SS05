#include <stdio.h>

int main()
{
    for (int j = 1; j <= 10; ++j)
    {
        for (int i = 1; i < 10; ++i)
        {
            printf("%d * %2d = %2d\t", i, j, i * j);
        }
        printf("\n");
    }
}