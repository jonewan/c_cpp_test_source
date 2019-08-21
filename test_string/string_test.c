/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：string_test.c
*   author：Jonewan
*   date：2019-08-12
*   discription：
*
================================================================*/


#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str[] = {"Welcome", "to", "Fortemedia", "Nanjing"};
	char **p = str+1;
	char *ll = "str";
	int a = 0;
	int *ip = &a;

	printf("ll=%p\n", ll);
	ll+=2;
	printf("ll=%p\n", ll);

	printf("ip=%p\n", ip);
	ip+=2;
	printf("ip=%p\n", ip);
	
	//puts("before:");
	printf("p = %p: %p : %s\n", p, *p, *p);
	printf("%p: %p: %s\n", &(str[0]), str[0], str[0]);
	printf("%p: %p: %s\n", &(str[1]), str[1], str[1]);
	printf("%p: %p: %s\n", &(str[2]), str[2], str[2]);
	printf("%p: %p: %s\n", &(str[3]), str[3], str[3]);

	str[0] = (*p++) + 2;
	printf("p = %p: %p : %s\n", p, *p, *p);
	str[1] = *(p+1);
	printf("p = %p: %p : %s\n", p, *p, *p);
	str[2] = p[1] + 3;
	printf("p = %p: %p : %s\n", p, *p, *p);
	printf("str[2]=%p: %p: %s\n", &(str[2]), str[2], str[2]);
	str[3] = p[0]+(str[2]-str[1]);
	printf("p = %p: %p : %s\n", p, *p, *p);

	puts("after:");
	printf("%p: %p: %s\n", &(str[0]), str[0], str[0]);
	printf("%p: %p: %s\n", &(str[1]), str[1], str[1]);
	printf("%p: %p: %s\n", &(str[2]), str[2], str[2]);
	printf("%p: %p: %s\n", &(str[3]), str[3], str[3]);

	return 0;
}
