#include <stdio.h>

int main()
{
    int n = 100;

    for (int i = n; i >= 1;)
    {
        printf("%d ", i--);
    }
}