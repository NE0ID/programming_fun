#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_str - check if entered string is conform
 *
 * @str: string to check
 * @allowed: allowed string
 * @choiceN: number of allowed choice
 *
 * Return: 0 if conform, -1 if not
 */
int check_str(char *str, char**allowed, int choiceN)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[j] != '\0')
	{
		if (allowed[i][j] == str[j])
			j++;
		else if ((allowed[i][j] != str[j]) && (i != choiceN))
			i++;
		else
			return (-1);
	}
	return (0);
}
