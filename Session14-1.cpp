#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];

    printf("Vui long nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    printf("Chuoi ban vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %d\n", strlen(chuoi) - 1);

    return 0;
}

