#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char * str){
	int index = 0;
	int ascii_arr[128];
	int max_sub_len = 0;
	int cur_sub_len = 0;
	int sub_start_index = 0;
	int i = 0;
	
	if (str == NULL)
		return -1;

	for (i = 0; i < sizeof(ascii_arr)/sizeof(int); i++)
		ascii_arr[i] = -1;
	
	while (index < strlen(str)) {
		if (ascii_arr[str[index]] != -1 && ascii_arr[str[index]] >= sub_start_index) {
			cur_sub_len = index - sub_start_index;//计算子串长度；
			max_sub_len = cur_sub_len > max_sub_len ? cur_sub_len : max_sub_len;//更新最大子串长度
			sub_start_index = ascii_arr[str[index]] + 1;//更新startIndex的值；
		}
		ascii_arr[str[index]] = index;
		index++;//更新ascii数组中元素的值；
	}
	
	cur_sub_len = index - sub_start_index;//计算子串长度；
	max_sub_len = cur_sub_len > max_sub_len ? cur_sub_len : max_sub_len;//更新最大子串长度
	
	return max_sub_len;
}

int main(void)
{
	char str[80] = {0};

	fgets(str, 80, stdin);
	str[strlen(str)-1] = 0;
	printf("%d\n", lengthOfLongestSubstring(str));

	return 0;	
}
