#include "stdio.h"
#include "stdlib.h"
#include "functions.h"

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

    initialize_random();

    int max, min;
    printf("Geben sie die kleinst moegliche zahl ein:");
    scanf("%d", &min);
    printf("Geben sie die groest moegliche zahl ein:");
    scanf("%d", &max);

    int random_number = generate_random(min, max);

    printf("Zufallszahl zwischen %d und %d lautet: %d", min, max, random_number);
    return EXIT_SUCCESS;
}
