/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：1.c
*   author：Jonewan
*   date：2019-07-31
*   discription：
*
================================================================*/


#include <stdio.h>
#include <string.h>

int func(char *c){
	printf("c = %p\n", c);
	*c = 1;	
}

int main(void)
{
	int i = 0;
	int a = 0x12345678;// = 0;
	int b = 0x12345678;// = 0;
	char *p = NULL;
	char d = 0;

	d = a;
	printf("d = %x\n",d);

	puts("pre a:\n");
	p = &a;
	for(i = 0; i < sizeof(int); i++)
			printf("p = %p, *p = %x\n", p++, *p);

	func((char*)&a);

	puts("cur a:\n");
	p = &a;
	for(i = 0; i < sizeof(int); i++)
			printf("p = %p, *p = %x\n", p++, *p);

	puts("pre b:\n");
	p = &b;
	for(i = 0; i < sizeof(int); i++)
			printf("p = %p, *p = %x\n", p++, *p);
	
	func(&b);

	puts("cur b:\n");
	p = &b;
	for(i = 0; i < sizeof(int); i++)
			printf("p = %p, *p = %x\n", p++, *p);

	return 0;
}
