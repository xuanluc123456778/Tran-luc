#include <stdio.h>
float tinhDienTich(float cd, float cr) {
    float dienTich = cd * cr;
    return dienTich;
}

float tinhChuVi(float cd, float cr) {
    float chuVi = 2 * (cd + cr);
    return chuVi;
}

int main() {
    float cd, cr;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &cd);

    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &cr);

    float dienTich = tinhDienTich(cd, cr);
    float chuVi = tinhChuVi(cd, cr);

    printf("Dien tich hinh chu nhat: %.2f\n", dienTich);
    printf("Chu vi hinh chu nhat: %.2f\n", chuVi);

    return 0;
}
//
// Created by Laptopkysu.vn on 30/05/2023.
//
