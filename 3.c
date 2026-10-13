#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	printf("Введите цифру от 0 до 9:");
	scanf_s("%c", &c);
	switch (c)
	{
	case '0':
		printf("zero\n");
		break;
	case '1':
		printf("one\n");
		break;
	case '2':
		printf("two\n");
		break;
	case '3':
		printf("three\n");
		break;
	case '4':
		printf("four\n");
		break;
	case '5':
		printf("five\n");
		break;
	case '6':
		printf("six\n");
		break;
	case '7':
		printf("seven\n");
		break;
	case '8':
		printf("eight\n");
		break;
	case '9':
		printf("nine\n");
	}
	return 0;
}