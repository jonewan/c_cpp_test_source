/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   fileName：test_atoi.c
*   author：Jonewan
*   date：2019-08-13
*   discription：
*
================================================================*/


#include <iostream>

using namespace std;

int my_atoi(const char *str);

int my_atoi(const char *str)
{
	int num = 0;
	int sign = 1;

	if (str == NULL)
		return -1;

	while (*str == '+' || *str == '-'){
		if (*str == '-')
			sign = -1;
		str++;
	}

	while (*str){
		if (*str < '0' || *str > '9')
			break;
		num = num * 10 + (*str - '0');
		str++;
	}

	num *= sign;

	return num;
}

int main(void)
{
	char str[10] = {0};
	int num = 0;

	cin.get(str, 10);

	num = my_atoi(str);
	cout << num << endl;

	return 0;
}
