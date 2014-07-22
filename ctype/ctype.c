/*=============================================================================
#     FileName: ctype.c
#         Desc: ctype usage
#       Author: WangYang
#        Email: wangyanghelloworld@gmail.com
#     HomePage: http://www.cnblogs.com/hellowangyang/
#      Version: 0.0.1
#   LastChange: 2014-07-22 15:01:48
#      History:
=============================================================================*/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))		//如果是一个字母
			putchar(ch + 1);	//则改变它
		else					//否则
			putchar(ch);		//原样打印它
	}
	putchar(ch);				//打印换行字符

	return 0;
}
