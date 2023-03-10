/*
 * File: 101-wildcmp.c
 * Auth: Tosin
 */

#include "main.h"

/**
 * strlen_no_wilds - returns the length of a string,
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * return: The length.
 */
int compare_strings(char* str1, char* str2)
{

	int i = 0;

	    while (str1[i] != '\0' && str2[i] != '\0') {

			if (str1[i] != str2[i]) {

					return 0;
}

				i++;
}
		if (str1[i] != str2[i]) {

			    return 0;
}
		    return 1;
}
