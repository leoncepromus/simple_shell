#ifndef OUR_SHELL_
#define OUR_SHELL_


/**---Libraries---**/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>



/**---Prototypes functions to print---**/
void _views(char *str)
int _ypviews(char c)

/**---Prototypes functions to handle PATH and environment variables---**/
char *_getenv(const char *name);


char **tokenize(char *buffer);
/*void execution(char **tokeni, char *path);*/
void clear_frame(char **frame)
char  *execution(char **tokeni, char *path);
void execution2(char **tokenized, char *comando, char *mypath, char *buffer);
/**---Prototypes functions to handle strings---**/
char *_ypcat(char *fd, char *sd)
char *_ypchv(char *haystack, const char *needle)
int _strlen(char *s);
int _ypdif(char *ypun, char *ypdo)
char *_codeswap(char *fn, char *sn)
int how_farcode(char *ypstr)
int align_p(char *ypstr)

/**---Delimitator---**/
#define DELIM " ,!¡¿?\'\"\n\t"

/**---Global variable environ---**/
extern char **environ;

/**---Function to print errors---**/
void printerror(int error, char **command);

//gcc -Wall -Wextra -pedantic *.c -o pro


#endif
