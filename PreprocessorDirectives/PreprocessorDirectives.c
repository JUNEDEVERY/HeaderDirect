#include "Header.h"

void main()
{

	system("chcp 1251>nul");
	printf("Умножение\n");
	printf("%.2f\n", Multiplication(F1, F2));

	printf("Деление\n");
	printf("%.2f\n", Division(F1, F2));

	printf("Сумма\n");
	printf("%.2f\n", Amount(F1, F2));

	printf("Разность\n");
	printf("%.2f\n", Difference(F1, F2));

	printf("\n");
	char* c = Unification(S1, S2);

	printf("%s", c);

	printf("\n");
	Transformation();

	printf("\nМакрос на длину отрезка\n");

	printf("%.2f\n", sqrtl(((pow((X2 - X1), 2) + pow((Y2 - Y1), 2)))));
	// удвоенная площадь треугольника по координатам вершин


	// удвоенная площадь
	//#if  (X3-X1)*(Y2-Y1) != (X2-X1)*(Y3-Y1)
	#if ((X2 - X1) * (Y3 - Y1) - (X3 - X1) * (Y2 - Y1)) != 0
	printf("Периметр равен %.2f\n", ((AB) + (AC) + (BC)));
	
	printf("Площадь равна %.2f\n", ((X2 - X1) * (Y3 - Y1) - (X3 - X1) * (Y2 - Y1)) * 0.5);

#else printf("Это не треугольник");
#endif 
}
