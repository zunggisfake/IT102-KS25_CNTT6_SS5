#include <stdio.h>

int main() {
    char letter;
    printf("Nhap vao chu cai bat ky: ");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z') {
        printf("Chu cai in hoa la: %c", letter - 32);
    }else if (letter >= 'A' && letter <= 'Z') {
        printf("Chu cai thuong la: %c", letter + 32);
    }else {
        printf("Khong phai chu cai");
    }
}
