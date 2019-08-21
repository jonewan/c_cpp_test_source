/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_palindrome_str.c
*   author：Jonewan
*   date：2019-08-13
*   discription：
*
================================================================*/


#include <stdio.h>
#include <string.h>
#include <assert.h>

int is_palindrome_str(const char *str);

int is_palindrome_str(const char *str)
{
	assert(str != NULL);

	int len = strlen(str);
	int i = 0;
	int is_palindrome = 1;

	for (i = 0; i < len/2; i++){
		if (*(str+i) != *(str+len-1-i)){
			is_palindrome = 0;
			break;
		}
	}

	return is_palindrome;
}

int main(void)
{
	char str[80];

	fgets(str, 80, stdin);
	str[strlen(str)-1] = 0;

	puts(str);
	if(is_palindrome_str(str))
		printf("str is palindrome\n");
	else
		printf("str is not palindrome\n");

	return 0;
}
