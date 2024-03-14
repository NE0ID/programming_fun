#include <stdio.h>
#include "family.h"

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char *choice[2] = {"Yes", "No"};
	int result = check_str("Yes", choice, 3);

	printf("%d", result);
	return (0);
}
