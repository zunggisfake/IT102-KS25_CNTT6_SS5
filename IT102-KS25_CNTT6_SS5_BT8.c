#include <stdio.h>

int main () {
    int cubicMeter;
    int price = 0;
    printf("Nhap vao so met khoi:");
    scanf("%d", &cubicMeter);

    if (cubicMeter > 0 && cubicMeter <= 10) {
        price += 10 * 6000;
        printf("Tong so tien nuoc phai tra trong thang la %d", price);
    }
    else if (cubicMeter > 11 && cubicMeter <= 20) {
        price += (cubicMeter - 10) * 7000 + 10 * 6000;
        printf("Tong so tien nuoc phai tra trong thang la %d", price);
    }
    else if ((cubicMeter) > 21 && (cubicMeter) <= 30) {
        price += (cubicMeter - 20) * 8500 + 10 * 7000 + 10 * 6000;
        printf("Tong so tien nuoc phai tra trong thang la %d", price);
    }
    else if (cubicMeter > 30) {
        price += (cubicMeter - 30) * 10000 + 10 * 8500 + 10 * 7000 + 10 * 6000;
        printf("Tong so tien nuoc phai tra trong thang la %d", price);
    }else {
        printf("So met khoi nhap khong hop le!");
    }
    return 0;
}
