#include "main.h"
#include <stdlib.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argumment vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 =1;

	for(i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[][i]; i++;)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 ==1)
	{
		printf("0\n");
		exit(0);
	}

	/**
	 * _initialize_array - set memery to zero in a new array
	 * @ar: char array.
	 * @lar: length of the char array.
	 *
	 * Return: pointer of a char array.
	 */
	char *_initializez_array(char *ar, int lar)
	{
		int i =0;

		for (i = 0; i < lar; i++)
			ar[i] = '0';
		ar[lar] = '\0';
		return (ar);
	}

