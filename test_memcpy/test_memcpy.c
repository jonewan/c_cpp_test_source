/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_memcpy.c
*   author：Jonewan
*   date：2019-08-05
*   discription：
*
================================================================*/


#include <stdio.h>
#include <string.h>
#include <assert.h>

void* _memcpy(void* memTo, void* memFrom, size_t size)
{
	assert(memTo != NULL && memFrom != NULL);
	char* temFrom = (char*)memFrom;
	char* temTo = (char*)memTo;
	while(size-- > 0)
		*temTo++ = *temFrom++;
	
	return memTo;
}

int main(void)
{
	unsigned char arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	//_memcpy(&arr[2], arr, 5);
	//_memcpy(arr, &arr[2], 5);

	memcpy(&arr[2], arr, 5);
	//memcpy(arr, &arr[2], 5);

	puts("\n");

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
