#include <stdio.h>

int main()
{
    int n = 5, i;
    printf("Nhap mot so: ");


    while (i != n)
    {
        scanf("%d", &i);
        if (i != n)
            printf("Nhap sai. Nhap lai:");
    }
    printf("Nhap dung.");


}