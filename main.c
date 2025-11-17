#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int N;
    double sum = 0;

    printf("Введите N: ");
    scanf("%d", &N);

    for (int i = N; i <= 2 * N; i++) {
        sum += i * i;
    }

    printf("Сумма квадратов от N до 2N: %.2f\n", sum);

    return 0;
}