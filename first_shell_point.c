#include "our_shell.h"

/**
 * _views - write a string to
 * @str: string entering
 * Return: void
 **/
void _views(char *str)
{
	int yp;

	for (yp = 0; str[yp] != '\0'; yp++)
	{
		_putchar(str[yp]);
	}
}

/**
 * _ypviews - prints the character c to stdout
 * @ypch: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _ypviews(char ypch)
{
		return (write(1, &ypch, 1));
}

/**
 * _ypcat - function to concatenate strings
 * @fd: first route string
 * @src: second route string
 * Return: pointer of concatenated string
 **/
char *_ypcat(char *fd, char *sd)
{
	int m, n;

	for (m = 0; fd[m] != '\0'; m++)
	{
	}
	fd[a] = '/';
	m++;
	for (n = 0; src[n] != '\0'; n++)
	{
		fd[m] = src[n];
		m++;
	}
	fd[m] = '\0';
	return (fd);
}

/**
 * _strstr - function to find a string within another string
 * @ypj: string where we will search
 * @yprose: check string to find
 * Return: once a string found
 **/
char *_ypchv(char *ypj, const char *yprose)
{
	char *ypch;

	while (*ypj)
	{
		while (*yprose == *ypj)
		{
			ypj++, yprose++;
		}
		if (*yprose == '\0')
		{
			if (*ypj == '=')
			{
				ypj++;
				*ypch = ypj;
				return (ypch);
			}
			return (NULL);
		}
		ypj++;
	}
	return (NULL);
}

/**
 * _ypdif - compares two strings
 * @ypun: string 1
 * @ypdo: string 2
 * Return: thus integer
 **/
int _ypdif(char *ypun, char *ypdo)
{
	int ypl;

	for (ypl = 0; ypun[ypl] == ypdo[ypl]; ypl++)
		if (ypun[ypl] == '\0')
			return (0);
	return (ypun[ypl] - ypdo[ypl]);
}
