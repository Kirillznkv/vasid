#include "stdio.h"
#include "math.h"

int		main()
{
	double	x, a, res;
	int	m, n;

	printf("Введите Х: ");
	scanf("%lf", &x);
	printf("Введите М: ");
	scanf("%d", &m);
	if (m < 0)
	{
		printf("М меньше 0\n");
		return (1);
	}
	else if (m == 0)
	{
		printf("res = 0\n");
		return (1);
	}
	res = x;
	n = 1;
	a = x;
	for (int i = 1; i < m; i++)
	{
		n += 2;
		a *= -pow(x / n, 2) * (n - 2) / (n - 1);
		res += a;
	}
	printf("Значегние интеграла из %d членов = %lf\n", m, res);
	return (0);
}