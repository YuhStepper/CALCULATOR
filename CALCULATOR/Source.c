#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int x = 0, y = 0;
	int door = 0, window = 0;

	puts("������� ������� ������ �����(� ������): ");
	puts("������ - ");
	scanf("%d", &x);
	puts("������ - ");
	scanf("%d", &y);
	int s = x * y;
	float sums = 0;
	sums += s;

	puts("������� ������� ������ �����(� ������): ");
	puts("������ - ");
	scanf("%d", &x);
	puts("������ - ");
	scanf("%d", &y);
	s = x * y;
	sums += s;

	puts("������� ������� ������� �����(� ������): ");
	puts("������ - ");
	scanf("%d", &x);
	puts("������ - ");
	scanf("%d", &y);
	s = x * y;
	sums += s;

	puts("������� ������� �������� �����(� ������): ");
	puts("������ - ");
	scanf("%d", &x);
	puts("������ - ");
	scanf("%d", &y);
	s = x * y;
	sums += s;

	puts("������� ������� �������� �����(� ������): ");
	puts("������ - ");
	scanf("%d", &x);
	puts("������ - ");
	scanf("%d", &y);
	door = x * y;

	float sums1 = 0;

	float wide = 0;
	puts("������� ���-�� ����: ");
	scanf("%d", &window);
	puts("������� ������� ���� (� ������): ");
	puts("������ - ");
	scanf("%f.", &wide);
	puts("������ - ");
	scanf("%d", &y);
	s = wide * y;

	sums1 = door + s * window;

	printf("��� ����������� %f. ���������� ������ �����!", sums - sums1);
}