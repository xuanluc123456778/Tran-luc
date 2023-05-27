#include <stdio.h>
void draw_rec(int s);
int main() {
    int size;
    printf("Demo ve ham: ");
    scanf("%d", &size);
    //3.Goi ham
    draw_rec(size);
    draw_rec(3);
    printf("\n\n Mot doan code khac....");
    draw_rec(5);
    return 0;
}
//2 Dinh nghia ham
void draw_rec(int s){
    printf("\nVe hinh chu nhat moi;) \n");
    for (int i = 0; i < s; ++i){
        printf("\n");
        for(int j = 0; j < s; j++){
            printf("*");
        }
    }
}

