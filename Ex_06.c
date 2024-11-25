#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f%f", &a, &b);

    int n;
    do
    {
        printf("\nCALCULATOR\n");
        printf("1. Tong\n");
        printf("2. Hieu\n");
        printf("3. Tich\n");
        printf("4. Thuong\n");
        printf("5. Thoat\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("%.2f + %.2f = %.2f", a, b, a + b);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f", a, b, a - b);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
        case 4:
            printf("%.2f / %.2f = %.2f", a, b, a / b);
            break;

        default:
            printf("Lua chon khong hop le");
            break;
        }
        if (n != 5)
        {
            printf("Nhap hai so moi: ");
            scanf("%f%f", &a, &b);
        }

    } while (n != 5);
}