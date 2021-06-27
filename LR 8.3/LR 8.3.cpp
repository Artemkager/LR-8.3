#include <iostream>
#define N 5 // Количество чисел
float average(int arr[]);
main() {
    int a[N];
    int i, min1, min2, buff;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        a[i] = rand() % 100;// формировка рандомных чисел (для более адекватных значений делю на 100)
        printf("%3d", a[i]);
    }
    printf("\n %.2f\n", average(a));
}
float average(int arr[]) {
    int sum, i;
    sum = 0;
    for (i = 0; i < N; i++) sum += arr[i];
    return sum;
}
