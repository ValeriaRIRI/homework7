#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int c;
	printf("Введите порядковый номер дня: ");
	scanf("%d", &c);

	switch (c) {
		case 1:
			printf("Понедельник");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		case 2:
			printf("Вторник");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		case 3:
			printf("Среда");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		case 4:
			printf("Четверг");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		case 5:
			printf("Пятница");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		case 6:
			printf("Суббота");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		case 7:
			printf("Воскресенье");
			printf("\nОсталось дней: %d", 7 - c);
			break;
		default:
			printf("День недели не определен");
	}
	return 0;
}
