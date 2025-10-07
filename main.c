#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main()
{ // ������� 7 (9%33+1)
	setlocale(LC_ALL,"RUS");

    double gamma, x, y, z;

	puts("������� ������� �������� x, y, z:");

	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);

	gamma = 5 * (atan(x)) - (1. / 4.) * (acos(x)) * ((x + 3. * fabs(x - y) + pow(x, 2.)) / (fabs(x - y) * z + pow(x, 2.)));

	printf("�����: %.6f", gamma);
	return 0;
}

/* ��� �������� ������������: 
x = 0.1722;
y = 6.33;
z = 0.000325;
�������: -205,305571
*/
