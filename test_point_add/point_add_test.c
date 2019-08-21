/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：point_add_test.c
*   author：Jonewan
*   date：2019-08-12
*   discription：
*
================================================================*/


#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int *ptr = (int *)(&a+1);
/*
	type of &a is (int[5] *), &a+1 will move 
  sizeof(int * 5)bytes, then ptr is point 
	to a[5] which is beyond the array limit;
*/
	for (int i = 0; i < 5; i++)
		printf("a%d is %p\n", i, a+i);

	printf("%d\n", *(a+1));
	printf("ptr is %p\n", ptr);
	printf("%d\n", *(ptr-1));

	return 0;
}
