#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem trung binh: ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le");
    } else {
        if (diem >= 8) {
            printf("Hoc luc gioi");
        } else if (diem >= 6.5) {
            printf("Hoc luc kha");
        } else if (diem >= 5) {
            printf("Hoc luc trung binh");
        } else {
            printf("Hoc luc yeu");
        }
    }
    return 0;
}
