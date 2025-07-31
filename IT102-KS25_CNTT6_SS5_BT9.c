#include <stdio.h>

int main(void) {
    char nameEmployee[50];
    float hesoLuong;
    int songayCong;
    int position;
    int salary;

    printf("Nhap ten nhan vien: ");
    fgets(nameEmployee, sizeof(nameEmployee), stdin);
    printf("Nhap he so luong: ");
    scanf("%f", &hesoLuong);
    printf("Nhap song ngay cong trong thang: ");
    scanf("%d", &songayCong);
    printf("Nhap chuc vu(1->3): ");
    scanf("%d", &position);

    if (songayCong > 0 && songayCong <= 31) {
        salary = songayCong * 160000 * hesoLuong;
    }else {
        printf("So ngay nhap khong hop le");
        return 1;
    }

    if (position == 1) {
        if (songayCong > 26) {
            salary += 500000 + (songayCong - 26) * 200000;
        }else {
            salary += 500000;
        }
    }else if (position == 2) {
        if (songayCong > 26) {
            salary += 1000000 + (songayCong - 26) * 200000;
        }else {
            salary += 1000000;
        }
    }else if (position == 3) {
        if (songayCong > 26) {
            salary += 2000000 + (songayCong - 26) * 200000;
        }else {
            salary += 2000000;
        }
    }else {
        printf("Chuc vu khong ton tai");
        return 1;
    }

    printf("Nhan vien %s co so luong trong thang nay la %d VND", nameEmployee, salary);
    return 0;
}
