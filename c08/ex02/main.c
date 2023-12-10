#include <stdio.h>
#include "ft_abs.h"

int main() {
    int num = -5;
    printf("El valor absoluto de %d es %d\n", num, ABS(num));

    double num2 = 3.14;
    printf("El valor absoluto de %lf es %lf\n", num2, ABS(num2));

    return 0;
}
