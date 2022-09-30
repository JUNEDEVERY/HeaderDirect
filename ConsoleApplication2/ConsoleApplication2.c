#include "Header.h"

void main()
{
    char* locale = setlocale(LC_ALL, "");
    printf("Умножение\n");
    printf("%.2f\n", Multiplication(5, 2));

    printf("Деление\n");
    printf("%.2f\n", Division(5, 2));

    printf("Сумма\n");
    printf("%.2f\n", Amount(5, 2));

    printf("Разность\n");

    printf("%.2f\n", Difference(5, 2));
    printf("\n");



    char c1[] = "AAAAAAAAAA";
    char c2[] = ", НЕТ БББББББББББ";
    char* c = Unification(c1, c2);
    printf("%s", c);
    printf("\n");
    Transformation();
}