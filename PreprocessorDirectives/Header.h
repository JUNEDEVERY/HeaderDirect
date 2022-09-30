#include <stdio.h>
#include <math.h>
#define F1 5
#define F2 2
#define N 54321
#define S1  "AAAAAAAAAA"
#define S2 ", НЕТ БББББББББББ"

#define ABS(a) ((a) < 0 ? -(a) : (a))

#define X1 1
#define Y1 1
#define X2 2
#define Y2 1
#define X3 1
#define Y3 2

#define AB sqrtl((pow((X2 - X1),2) + pow((Y2 - Y1),2))) // большая точность
#define AC sqrtl((pow((X3 - X1),2) + pow((Y3 - Y1),2))) // большая точность
#define BC sqrtl((pow((X3 - X2),2) + pow((Y3 - Y2),2))) // большая точность



float Amount(float, float);
float Difference(float, float);
float Division(float, float);
float Multiplication(float, float);
char* Unification(char*, char*);

float Multiplication(float a, float b)
{
	return a * b;
}

float Division(float a, float b)
{
	return a / b;
}

float Amount(float a, float b)
{
	return a + b;
}

float Difference(float a, float b)
{
	return a - b;
}


char* Unification(char* a, char* b)
{
	int str1 = 0, str2 = 0;
	while (a[str1] != '\0')
	{
		str1++;
	}
	while (b[str2] != '\0')
	{
		str2++;
	}
	char* c = malloc(str1 + str2);
	for (int i = 0; i < str1; i++)
	{
		c[i] = a[i];
	}
	for (int i = 0; i < str2; i++)
	{
		c[i + str1] = b[i];
	}
	c[str1 + str2] = '\0';
	return c;
}


void Transformation()
{
	char snum[6] = { '1','2','3','4','5' };
	
	printf("\n%d", atoi(snum));

	itoa(N, snum, 10);
	printf("\n%s\n", snum);
}

