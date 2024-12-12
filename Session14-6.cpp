#include <stdio.h>

int main() {
    char chuoi[100];
    int dem = 0;
    int i = 0;

    printf("Nhap vao chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    while (chuoi[i] != '\0') {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            dem++;
        }
        i++;
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", dem);

    return 0;
}

