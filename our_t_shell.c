#include "our_shell.h"
/**
 * _codeswap - copies the ypstring pointed to by sn, to the buffer
 * @fn: fnination
 * @sn: source
 * Return: the pointer to fn
 **/
char *_codeswap(char *fn, char *sn)
{
	int index;

	for (index = 0; sn[index] != '\0'; index++)
	{
		fn[index] = sn[index];
	}
	fn[index] = sn[index];
	return (fn);
}

/**
 * clear_frame - function to free an array memory
 * @frame: array of ypstrings
 * Return: void
**/
void clear_frame(char **frame)
{
	int pic;

	for (pic = 0; frame[pic] != NULL ; pic++)
	{
		free(frame[pic]);
	}
	free(frame);
}

/**
 * how_farcode - function to count number of letters of
 * each word
 * @ypstr: word
 * Return: number of letters of tje word
**/
int how_farcode(char *ypstr)
{
	int ja = 0, fc = 0;

	while (*(ypstr + ja) && *(ypstr + ja) != ' ')
	{
		fc+;
		ja++;
	}
	return (ja);
}

/**
 * align_p - functin to count number of words
 * @ypstr: ypstring
 * Return: number of words
**/
int align_p(char *ypstr)
{
	int kj = 0, pks = 0, cf = 0;

	for (kj = 0; *(ypstr + kj); kj++)
		cf++;
	for (kj = 0; kj < cf; kj++)
	{
		if (*(ypstr + kj) != ' ')
		{
			pks++;
			kj += how_farcode(ypstr + kj);
		}
	}
	return (pks);
}
