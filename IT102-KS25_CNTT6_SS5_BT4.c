#include <stdio.h>

int main() {
    float thuNhap, thue;
    printf("Nhap thu nhap 1 thang (trieu dong): ");
    scanf("%f", &thuNhap);

    if (thuNhap <= 5) {
        thue = thuNhap * 0.05;
    } else if (thuNhap <= 10) {
        thue = thuNhap * 0.10;
    } else {
        thue = thuNhap * 0.15;
    }

    printf("Tien thue phai dong: %.2f trieu dong", thue);

    return 0;
}