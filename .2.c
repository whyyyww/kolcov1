#include <stdio.h>

int main() {
    int blue_balls[5] = {1, 2, 3, 4, 5}; // Заполнение массива
    int size = sizeof(blue_balls) / sizeof(blue_balls[0]);
    printf("В коробке blue_balls помещается %d шариков.\n", size);
    return 0;
}
