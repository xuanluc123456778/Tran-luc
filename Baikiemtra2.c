#include <stdio.h>
#include <stdbool.h>

bool isEvenNumber(int number) {
    if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, m;
    
    printf("Nhap vao so tu nhien n: ");
    scanf("%d", &n);
    
    printf("Nhap vao so tu nhien m: ");
    scanf("%d", &m);
    
    printf("Cac so chan tu %d den %d la: ", n, m);
    for (int i = n; i <= m; i++) {
        if (isEvenNumber(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
