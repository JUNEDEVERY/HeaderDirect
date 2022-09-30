#include <stdio.h>
#include <math.h>
#include <locale.h>


float Multiplication(float, float);
float Division(float, float);
float Amount(float, float);
float Difference(float, float);
char* Unification(char*, char*);

float Multiplication(float a, float b)// метод умножения
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


char* Unification(char* a, char* b) // метод объединения двух строк
{
    int str1 = 0, str2 = 0;

    while (a[str1] != '\0') // подсчет кол-во символов. пока строка не остановится
    {
        str1++;
    }
    while (b[str2] != '\0') // подсчет кол-во символов. пока строка не остановится
    {
        str2++;
    }
    char* c = malloc(str1 + str2); // создаем указатель ( массив) и выделяем память под две строки

    for (int i = 0; i < str1; i++)
    {
        c[i] = a[i]; // на указатель прописываем 1 строку
    }


    for (int i = 0; i < str2; i++)
    {
        c[i + str1] = b[i]; //  к тому, что выше прописываем вторую строку
        // папа мамам
        // 0123_4
    }
    c[str1 + str2] = '\0';
    // добавляем символ в конец строки, чтобы вывести на консоль
    return c;
}


void Transformation()
{

    int num = 54321; // создаем "число"
    char snum[7] = { '1', ',','5','2','3','4','5' }; // создаем строку
    // float b = atof(snum);


    printf("\n%2.5f", atof(snum)); // преобразуем строку в double

    itoa(num, snum, 10); 
    // первый элемент - число, которое хотим преобразовать
    // второй параметр  - строка, куда хотим записать число
    // 3 - основание системы счисления
    printf("\n%s\n", snum);
}