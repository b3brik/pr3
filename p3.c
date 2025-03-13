#include <stdio.h>
#include <stdlib.h>

void processArray(int *arr, int size) {
    int sum = 0, count = 0;
    printf("Отрицательные элементы находятся на позициях: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", i);
            sum += arr[i];
            count++;
        }
    }
    if (count > 0) {
        printf("\nСреднее арифметическое отрицательных элементов: %.2f\n", (double)sum / count);
    } else {
        printf("\nОтрицательных элементов нет.\n");
    }
}

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    printf("Введите %d элементов массива: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    processArray(arr, n);
    
    free(arr);
    return 0;
}
