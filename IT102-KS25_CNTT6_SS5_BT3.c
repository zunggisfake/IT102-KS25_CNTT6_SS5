#include <stdio.h>

int main() {
    float a, b;
    float result;
    printf("Nhap vao 2 so a va b:");
    scanf("%f %f", &a, &b);
    if (a == 0) {
        printf("Day khong phai phuong trinh bac nhat");
    }else {
        result = -b / a;
        printf("Phuong trình bac nhat %dx + b = 0", a, b);
        printf("Ket qua x = %d", result);
    }
}
