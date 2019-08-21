/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_strstr.c
*   author：Jonewan
*   date：2019-08-13
*   discription：
*
================================================================*/


#include <stdio.h>

const char *my_strstr(const char *src, const char *sub);

const char *my_strstr(const char *src, const char *sub)
{
	if (src == NULL || sub == NULL)
		return NULL;

	while (*src != '\0'){
		const char *src_tmp = src;
		const char *sub_tmp = sub;

		do{
			if(*sub_tmp == '\0')
				return src;
		}while(*src_tmp++ == *sub_tmp++);

		src++;
	}
	
	return NULL;
}

int main(void)
{
	char *str = "I love jonewan.";
	char *sub = "jonewan";
	const char *strstr = NULL;

	strstr = my_strstr(str, sub);
	printf("%d:%s\n", strstr-str, strstr);

	return 0;
}
