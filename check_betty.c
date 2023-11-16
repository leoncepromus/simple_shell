#include "shell.h"

/**
 * @inter_shell - it prints true if shell is in interactive
 * @info: the struct address
 * 
 * Return: 1 if interactive mode, 0 if opposite
 */

int inter_shell(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_dlm - checks if character is a delimeter
 * @k:  char to checked
 * @delim:  delimeter string
 * Return: 1 if true, 0 if opposite
 */
int is_dlm(char k, char *delim)
{
	while (*delim)
		if (*delim++ == k)
			return (1);
	return (0);
}


/**
 *_isal - looks for alphabetic character
 *@l: character to input
 *Return: 1 if d is alphabetic, 0 opposite
 */

int _isal(int l)
{
	if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *@atoi - function tht converts  string to  integer
 *@y: string to be converted
 *Return: 0 if no is still string, converted number otherwise
 */

int atoi(char *y)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  y[i] != '\0' && flag != 2; i++)
	{
		if (y[i] == '-')
			sign *= -1;

		if (y[i] >= '0' && y[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (y[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
