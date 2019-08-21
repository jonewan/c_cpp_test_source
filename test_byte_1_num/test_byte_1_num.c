/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_byte_1_num.c
*   author：Jonewan
*   date：2019-08-14
*   discription：
*
================================================================*/


#include <stdio.h>

int test_byte_1_count(int num);

int test_byte_1_count(int num)
{
	int count = 0;

	while (num){
		num &= num-1;
		count++;
	}

	return count;
}

int main(void)
{
	int num = 0;

	scanf("%x", &num);
	printf("%d\n", test_byte_1_count(num));

	return 0;
}
