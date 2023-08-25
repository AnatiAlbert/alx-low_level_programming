#include "main.h"

/**
 * cap_string - capitalizes all first characters
 * @str: value to be capitalized
 * Return: returns a pointer
 */
char *cap_string(char *str)
{
	int init = 0;

	while (str[init])
	{
		while (!(str[init] >= 'a' && str[init] <= 'z'))
		{
			init++;
		}
		if (str[init - 1] == ' ' ||
		    str[init - 1] == '\t' ||
		    str[init - 1] == '\n' ||
		    str[init - 1] == ',' ||
		    str[init - 1] == ';' ||
		    str[init - 1] == '.' ||
		    str[init - 1] == '!' ||
		    str[init - 1] == '?' ||
		    str[init - 1] == '"' ||
		    str[init - 1] == '(' ||
		    str[init - 1] == ')' ||
		    str[init - 1] == '{' ||
		    str[init - 1] == '}' ||
	 	    init == 0)
		{
			str[init] = str[init] - 32;
		}
		init++;
	}
	return (str);
}
