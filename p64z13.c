#include "stdio.h"
#include "stdlib.h"

int		main()
{
	char	*filename = "test.txt";
	FILE	*file;
	char	*line;

// Подсчет символов
	int i = 0;
	file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Не удалось открыть файл\n");
		return (1);
	}
	while (fgetc(file) != EOF)
		i++;
	fclose(file);
// Считывание файла
	file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Не удалось открыть файл\n");
		return (1);
	}
	line = (char*)malloc(i + 1);
	line[i--] = '\0';
	while ((line[i] = fgetc(file)) != EOF)
		i--;
	printf("%s.", line);
	fclose(file);
	return (0);
}