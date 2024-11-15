#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
    int scanner;
    printf("Geben sie eine Gewuenschte Zahl an:");
    scanf("%d", &scanner);

    if (scanner == 69) {
        printf("Du Schlingl :)");
    } else {
        printf("%d", scanner);
    }

    return EXIT_SUCCESS;
}