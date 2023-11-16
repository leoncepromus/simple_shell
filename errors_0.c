#include "shell.h"

/**
 *_eputs - function that prints an input string
 * @string: the string tht is to be printed
 *
 * Return: Nothing
 */
void _eputs(char *string)
{
	int j = 0;

	if (!string)
		return;
	while (string[j] != '\0')
	{
		put_char(string[j]);
		j++;
	}
}

/**
 * put_char - function that writes the char d to stderr
 * @d: The character to written
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno  printed.
 */
int put_char(char d)
{
	static int j;
	static char buf[WRITE_BUF_SIZE];

	if (d == BUF_FLUSH || j >= WRITE_BUF_SIZE)
	{
		write(2, buf, j);
		j = 0;
	}
	if (d != BUF_FLUSH)
		buf[j++] = d;
	return (1);
}

/**
 * put_to_fd - function tht writes the character d to  fd
 * @d:  character to be printed
 * @fd:  filedescriptor to write to or modify
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is returned.
 */

int put_to_fd(char d, int fd)
{
	static int j;
	static char buf[WRITE_BUF_SIZE];

	if (d == BUF_FLUSH || j >= WRITE_BUF_SIZE)
	{
		write(fd, buf, j);
		j = 0;
	}
	if (d != BUF_FLUSH)
		buf[j++] = d;
	return (1);
}

/**
 * puts_fd -function that  prints  input string
 * @string: the string to  print
 * @fd:  filedescriptor to write or modify
 *
 * Return: the number of chars put
 */
int puts_fd(char *string, int fd)
{
	int j = 0;

	if (!string)
		return (0);
	while (*string)
	{
		j += put_to_fd(*string++, fd);
	}
	return (j);
}
