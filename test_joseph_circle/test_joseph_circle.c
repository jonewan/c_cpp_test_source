/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_joseph_circle.c
*   author：Jonewan
*   date：2019-08-16
*   discription：
*
================================================================*/


#include <stdio.h>
#include <malloc.h>

int joseph(const int init_count, const int out_num);

int joseph(const int init_count, const int out_num)
{
	char *circle = NULL;
	int i = 0;
	int count = 0;
	int max = init_count;
	
	if (init_count <= 0 || out_num <= 0)
		return -1;

	circle = calloc(sizeof(char), init_count);
	if (circle == NULL)
		return -1;

	while (max > 0){
		if (circle[i] == 0){
			count++;
			if (count == out_num){
				count = 0;
				printf("%d ", i+1);
				circle[i] = 1;
				max--;
			}
		}
		i = (i+1)%init_count;
	}

//	while (max > 0){//只要还有人在圈内
//		if (count == (out_num-1)){//计数器到
//			count = 0;//重新装载
//			printf("%d ", i+1);//该人出圈
//			circle[i] = 1;//标记该人出圈
//			max--;//剩余人数减一
//		}else{
//			/* 略过已经出圈的人 */
//			while(circle[i] != 0)
//				i = (i+1)%init_count;
//			/* 计数值-1 */
//			count++;
//			/* 找到下一个人 */
//			i = (i+1)%init_count;
//			/* 略过已经出圈的人 */
//			while(circle[i] != 0)
//				i = (i+1)%init_count;
//		}
//	}

	free(circle);
	circle = NULL;

	return i+1;
}

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);

	printf("\n %d \n", joseph(a, b));

	return 0;
}
