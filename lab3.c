#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#define      D       2.54
#define      I       2.33


int main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result;
	int print();
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов – это %.1f см", dym, result);
}
