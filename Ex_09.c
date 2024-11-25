#include <stdio.h>

int main()
{
    float a = 0, b = 0, c = 0;
    int n;
    do
    {
        printf("\nMenu\n");
        printf("1. Nhap 3 so.\n");
        printf("2. Tong 3 so.\n");
        printf("3. Trung binh cong 3 so.\n");
        printf("4. So nho nhat.\n");
        printf("5. So lon nhat.\n");
        printf("6. Thoat.\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Nhap ba so: ");
            scanf("%f%f%f", &a, &b, &c);
            break;
        case 2:
            printf("%.2f + %.2f + %.2f = %.2f\n", a, b, c, a + b + c);
            break;
        case 3:
            printf("Trung binh cong: %.2f\n", (a + b + c) / 3);
            break;
        case 4:
            printf("Min: %.2f\n", (a < b) ? (a < c ? a : c) : (b < c ? b : c));
            break;
        case 5:
            printf("Max: %.2f\n", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (n != 6);
}