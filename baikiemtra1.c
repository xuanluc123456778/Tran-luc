#include<stdio.h>

int isEvenNumber(int num);

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (isEvenNumber(num)) {
        printf("%d la so chan", num);
    } else {
        printf("%d la so le", num);
    }
    return 0;
}

int isEvenNumber(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
