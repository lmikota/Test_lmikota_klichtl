#include "stdio.h"
#include "stdlib.h"
#include <time.h>

void initialize_random() {
    srand((unsigned int)time(NULL));
}

int generate_random(int min, int max) {
    return min + rand() % (max - min + 1);
}
