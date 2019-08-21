/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_strcpy.c
*   author：Jonewan
*   date：2019-08-13
*   discription：
*
================================================================*/


#include <stdio.h>
#include <string.h>
#include <assert.h>

char *my_strcpy(char *dest, const char *source);
int my_strlen1(const char *str);
int my_strlen2(const char *str);

int my_strlen2(const char *str)
{
	assert(str != NULL);
	const char *str_tmp = str;

	while (*str++ != '\0')
		;
	
	return (str-str_tmp-1);
}

int my_strlen1(const char *str)
{
	assert(str != NULL);

	int len = 0;
	
	while (*str++ != '\0')
		len++;

	return len;
}

char *my_strcpy(char *dest, const char *source)
{
	assert((dest != NULL) && (source != NULL));

	char *destcpy = dest;

	while ((*dest++ = *source++) != '\0')
		;
	
	return destcpy;
}

int main(void)
{
	int len = 0;
	char *str1 = "jonewan.";
	char str2[] = "jonewan.";

	len = my_strlen2(my_strcpy(str2, str2+1));
//	strcpy(str2, str2+1);
	printf("%s is %d\n", str2, len);

	return 0;
}
