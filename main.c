#include <stdio.h>

float sodu = 10000000;

void Kiemtrasodu() {
    printf("So du hien tai %.2f\n", sodu);
}

void Ruttien() {
    float Ruttien;
    printf("Nhap so tien muon rut: ");
    scanf("%f", &Ruttien);

    if (Ruttien <= sodu) {
        sodu -= Ruttien;
        printf("Rut tien thanh cong. Nhap so du hien tai: %.2f\n", sodu);
    } else {
        printf("So du khong du de thuc hien giao dich.\n");
    }
}

void Guitien() {
    float Ruttien;
    printf("Nhap so tien muon gui: ");
    scanf("%f", &Guitien);

    sodu += Ruttien;
    printf("Gui tien thanh cong. Nhap so du hien tai: %.2f\n", sodu);
}

int main() {
    char choice;

    do {
        printf("MENU:\n");
        printf("1. Kiemtrasodu\n");
        printf("2. Ruttien\n");
        printf("3. Guitien\n");
        printf("4. Thoat\n");
        printf("Chonmotluachon: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                Kiemtrasodu();
                break;
            case '2':
                Ruttien();
                break;
            case '3':
                Guitien();
                break;
            case '4':
                printf("Thoat khoi chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

        printf("\n");
    } while (choice != 'd');

    return 0;
}
