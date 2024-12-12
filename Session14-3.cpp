#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello, World!";
    int len = strlen(chuoi);  
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    return 0;
}

