#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	char c;
	printf("Введите выражения для счета: ");
	scanf_s("%f%c%f", &x, &c, 1, &y);
	switch (c)
	{
	case '+':
		printf("=%.2f\n", x+y);
		break;
	case '-':
		printf("=%.2f\n", x - y);
		break;
	case '*':
		printf("=%.2f\n", x * y);
		break;
	case '/':
		printf("=%.2f\n", x / y);
		break;
	case 's':
		printf("=%.2f\n", sqrt(x));
		break;
	default:
		printf("Неизвестная операция\n");
	}
	return 0;
}