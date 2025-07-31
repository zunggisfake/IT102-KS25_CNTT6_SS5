#include <stdio.h>

int main() {
    float a,b;
    char operator[1];
    printf("Nhap 2 so a va b:");
    scanf("%f %f",&a,&b);
    printf("Nhap toan tu ban mong muon:");
    scanf("%s",operator);
    if (operator[0] == '+') {
        float result = a + b;
        printf("Ket qua phep tinh ban nhap la: %.2f", result);
    }else if (operator[0] == '-') {
        float result = a - b;
        printf("Ket qua phep tinh ban nhap la: %.2f", result);
    }else if (operator[0] == '*') {
        float result = a * b;
        printf("Ket qua phep tinh ban nhap la: %.2f", result);
    }else if (operator[0] == '/') {
        if (b == 0) {
            printf("So khong hop le");
        }else {
            float result = a / b;
            printf("Ket qua phep tinh ban nhap la: %.2f", result);
        }
    }else {
        printf("Phep tinh khong hop le");
    }
}
