#include "stdio.h"
#define size 3

void	output(int a[size][size])
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
}

int		max_in_ar(int a[size][size], int i)
{
	int		max = a[i][0];

	for (int j = 1; j < size; j++)
		if (a[i][j] > max)
			max = a[i][j];
	return (max);
}

int		main()
{
	int		a[size][size] = {
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3}
	};
	int		b[size][size] = {
		{1, 1, 10},
		{1, 20, 2},
		{3, 1, 1}
	};
	int		res[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			res[i][j] = a[i][j] * max_in_ar(b, i);
		}
	}
	output(res);
	return (0);
}