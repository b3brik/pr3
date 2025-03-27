#include <stdio.h>

void processNumbers(int *x, int *y) {
    *x *= 2;  
    *y /= 2;  
}

int main() {
    int a, b;
    printf("Введите два целых числа: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    processNumbers(&a, &b);
    
    printf("Вывод: a = %d, b = %d\n", a, b);
    return 0;
}

