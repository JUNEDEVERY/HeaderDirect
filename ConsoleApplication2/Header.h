#include <stdio.h>
#include <math.h>
#include <locale.h>


float Multiplication(float, float);
float Division(float, float);
float Amount(float, float);
float Difference(float, float);
char* Unification(char*, char*);

float Multiplication(float a, float b)// ����� ���������
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


char* Unification(char* a, char* b) // ����� ����������� ���� �����
{
    int str1 = 0, str2 = 0;

    while (a[str1] != '\0') // ������� ���-�� ��������. ���� ������ �� �����������
    {
        str1++;
    }
    while (b[str2] != '\0') // ������� ���-�� ��������. ���� ������ �� �����������
    {
        str2++;
    }
    char* c = malloc(str1 + str2); // ������� ��������� ( ������) � �������� ������ ��� ��� ������

    for (int i = 0; i < str1; i++)
    {
        c[i] = a[i]; // �� ��������� ����������� 1 ������
    }


    for (int i = 0; i < str2; i++)
    {
        c[i + str1] = b[i]; //  � ����, ��� ���� ����������� ������ ������
        // ���� �����
        // 0123_4
    }
    c[str1 + str2] = '\0';
    // ��������� ������ � ����� ������, ����� ������� �� �������
    return c;
}


void Transformation()
{

    int num = 54321; // ������� "�����"
    char snum[7] = { '1', ',','5','2','3','4','5' }; // ������� ������
    // float b = atof(snum);


    printf("\n%2.5f", atof(snum)); // ����������� ������ � double

    itoa(num, snum, 10); 
    // ������ ������� - �����, ������� ����� �������������
    // ������ ��������  - ������, ���� ����� �������� �����
    // 3 - ��������� ������� ���������
    printf("\n%s\n", snum);
}