#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
    int scanner;
    char ch;
    printf("Geben sie eine Gewuenschte Zahl an:");
    scanf("%d", &scanner);

    if (scanner == 69) {
        printf("Du Schlingl");
    } else {
        printf("%d\n", scanner);
    }

    FILE *fp;
    fp = fopen("C:\\HTL\\3AHTIN\\ITP\\Git\\zweite_git_Uebung_Github\\Test_lmikota_klichtl\\user.txt","r");
    if (fp == NULL) {
        printf("Fehler: Die Datei konnte nicht geöffnet werden.\n");
        exit(1);
    }

    while (ch = fgetc(fp) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return EXIT_SUCCESS;
}