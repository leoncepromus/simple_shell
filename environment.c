#include "shell.h"

/**
 * my_env - function that prints the current environment
 * @info: Structure that has potential arguments.maintains
 *          constant function prototype.
 * Return: Always 0
 */
int my_env(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * _getenv - function that gets the value of an environ variable
 * @info: Structure tht has possible arguments
 * @nm: environent var name
 *
 * Return: value
 */
char *getenv(info_t *info, const char *nm)
{
	list_t *node1 = info->env;
	char *q;

	while (node1)
	{
		q = starts_with(node1->str, nm);
		if (q && *q)
			return (q);
		node1 = node1->next;
	}
	return (NULL);
}

/**
 * my_set_env - function that Initialize  new environment var,
 *             or modify existing ones
 * @info: Structure that has arguments.maintains
 *        constant function prototype.
 *  Return: Always 0
 */
int my_set_env(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * my_un_set_env - function that Removes an environment variable
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
 */

int my_un_set_env(info_t *info)
{
	int j;

	if (info->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}
	for (j = 1; j <= info->argc; j++)
		_unsetenv(info, info->argv[j]);

	return (0);
}

/**
 * populate_env_list -function that  populates environmnt linked list
 * @info: Structure that has  arguments. maintains
 *          constant function prototype.
 * Return: Always 0
 */

int populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t j;

	for (j = 0; environ[j]; j++)
		add_node_end(&node, environ[j], 0);
	info->env = node;
	return (0);
}
