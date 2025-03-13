#include <stdio.h>

void processNumbers(int *x, int *y) {
    *x *= 2;  
    *y /= 2;  
}

int main() {
    int a, b;
    printf("Введите два ЦЕЛЫХ числа: ");
    scanf("%d %d", &a, &b);
    
    int *ptrA = &a, *ptrB = &b;
    processNumbers(ptrA, ptrB);
    
    printf("Вывод: a = %d, b = %d\n", a, b);
    return 0;
}
