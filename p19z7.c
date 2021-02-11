#include "math.h"
#include "stdio.h"

void	func(double a, double b, double c)
{
	double	d;
	double	p1, p2;
	double	x;
	int		i;

	d = (b * b) - (4 * a * c);
	p1 = (sqrt(d) - b) / (2 * a);
	p2 = (- sqrt(d) - b) / (2 * a);
	i = 0;
	if (p1 > 0)
	{
		x = sqrt(p1);
		printf("x%d = %lf\n", ++i, -x);
		printf("x%d = %lf\n", ++i, x);
	}
	else if (p1 == 0)
		printf("x%d = 0\n", ++i);
	if (p2 > 0 && p2 != p1)
	{
		x = sqrt(p2);
		printf("x%d = %lf\n", ++i, -x);
		printf("x%d = %lf\n", ++i, x);
	}
	else if (p2 == 0 && p2 != p1)
		printf("x%d = 0\n", ++i);
	if (i == 0)
		printf("Корней не найдно\n");
}

int		main()
{
	double	a, b, c;

	printf("Введите a: ");
	scanf("%lf", &a);
	printf("Введите b: ");
	scanf("%lf", &b);
	printf("Введите c: ");
	scanf("%lf", &c);
	func(a, b, c);
	return (0);
}