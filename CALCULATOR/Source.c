#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int x = 0, y = 0;
	int door = 0, window = 0;

	puts("Введите размеры первой стены(в метрах): ");
	puts("Ширина - ");
	scanf("%d", &x);
	puts("Высота - ");
	scanf("%d", &y);
	int s = x * y;
	float sums = 0;
	sums += s;

	puts("Введите размеры второй стены(в метрах): ");
	puts("Ширина - ");
	scanf("%d", &x);
	puts("Высота - ");
	scanf("%d", &y);
	s = x * y;
	sums += s;

	puts("Введите размеры третьей стены(в метрах): ");
	puts("Ширина - ");
	scanf("%d", &x);
	puts("Высота - ");
	scanf("%d", &y);
	s = x * y;
	sums += s;

	puts("Введите размеры четвёртой стены(в метрах): ");
	puts("Ширина - ");
	scanf("%d", &x);
	puts("Высота - ");
	scanf("%d", &y);
	s = x * y;
	sums += s;

	puts("Введите размеры дверного проёма(в метрах): ");
	puts("Ширина - ");
	scanf("%d", &x);
	puts("Высота - ");
	scanf("%d", &y);
	door = x * y;

	float sums1 = 0;

	float wide = 0;
	puts("Введите кол-во окон: ");
	scanf("%d", &window);
	puts("Введите размеры окна (в метрах): ");
	puts("Ширина - ");
	scanf("%f.", &wide);
	puts("Высота - ");
	scanf("%d", &y);
	s = wide * y;

	sums1 = door + s * window;

	printf("Вам понадобится %f. квадратных метров обоев!", sums - sums1);
}