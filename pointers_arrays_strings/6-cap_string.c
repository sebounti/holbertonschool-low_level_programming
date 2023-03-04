#include "main.h"
/**
* cap_string - change lowercase letters to uppercase
* @str: string variable
* Return: Always 0
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')

		for (; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] == ' ' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '.' ||
				str[i - 1] == '(' ||
				str[i - 1] == ' ' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				str[i - 1] == '\n' ||
				str[i - 1] == '\t' )
				{
				str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
