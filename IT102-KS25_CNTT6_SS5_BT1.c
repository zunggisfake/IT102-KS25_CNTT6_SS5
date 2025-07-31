#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap 2 so nguyen a, b:");
    scanf("%d %d", &a, &b);
    if (a == b) {
        printf("Hai so bang nhau");
    }else if (a > b) {
        printf("a lon hon b");
    }else {
        printf("b lon hon a");
    }
}