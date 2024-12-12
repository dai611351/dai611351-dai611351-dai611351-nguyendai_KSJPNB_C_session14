#include <stdio.h>

int main() {
    char chuoi[100];
    int dem = 0;
    int i = 0;
    printf("Nhap vao chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    while (chuoi[i] != '\0') {
        if ((i == 0 || chuoi[i - 1] == ' ') && chuoi[i] != ' ') {
            dem++;
        }
        i++;
    }
    printf("So tu trong chuoi la: %d\n", dem);

    return 0;
}

