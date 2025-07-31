#include <stdio.h>

int main() {
    int age;
    printf("Nhap so tuoi cua ban:");
    scanf("%d", &age);

    if (age < 6 && age >= 0) {
        printf("Ve xe cua ban duoc mien phi!");
    }else if (age >= 6 && age <= 18) {
        printf("Ve xe cua ban duoc giam 50%%! Gia ve xe khach la 10000VND");
    }else if (age >= 19 && age <= 60) {
        printf("Ve xe cua ban la 20000VMD!");
    }else if (age > 60 && age <= 100) {
        printf("Ve xe cua ban duoc giam 70%%! Gia ve xe khach la 6000VND");
    }else {
        printf("Vui long nhap lai so tuoi cua ban!");
    }
}
