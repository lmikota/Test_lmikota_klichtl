#include "stdio.h"
#include "stdlib.h"
#include "functions.h"

int main(int argc, char *argv[]) {
    int scanner;
    printf("Geben sie eine Gewuenschte Zahl an:");
    scanf("%d", &scanner);

    if (scanner == 69) {
        printf("Du Schlingl :)");
    } else {
        printf("%d", scanner);
    }

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