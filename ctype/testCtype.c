/*=============================================================================
#     FileName: testCtype.c
#         Desc: simple test for ctype.h
#       Author: WangYang
#        Email: wangyanghelloworld@gmail.com
#     HomePage: http://www.cnblogs.com/hellowangyang/
#      Version: 0.0.1
#   LastChange: 2014-07-22 15:58:52
#      History:
=============================================================================*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int digits=0;     //数字(0~10 48~57)
	int alphas=0;     //字母(a~z 97~122,A~Z 65~90)  
	int alnums=0;     //数字 || 字母 
	int cntrls=0;     //控制字符(0~30)  
	int asciis=0;     //ascii字符(0~127)
	int graphics=0;   //可显示字符(不包括空格)
	int prints=0;     //可打印字符(包括空格)
	int lowers=0;     //小写字母  
	int uppers=0;     //大写字母
	int spaces=0;     //空格(包括空格，翻页，制表符等) 
	int puncts=0;     //除数字字母和空格外的字符 
	int xdigits=0;    //十六进制字符 

	//介于0~127之间的数填充数组
	int randomInts[10000];
	int i = 0;
	for (i =0; i<10000; i++)
	{
		randomInts[i] = rand() % 127;
	}

	for (i=0; i<10000; i++)
	{
		if (isdigit(randomInts[i]))
			digits++;
		if (isalpha(randomInts[i]))
			alphas++;
		if (isalnum(randomInts[i]))
			alnums++;
		if (iscntrl(randomInts[i]))
			cntrls++;
		if (isascii(randomInts[i]))
			asciis++;
		if (isgraph(randomInts[i]))
			graphics++;
		if (isdigit(randomInts[i]))
			digits++;
		if (isprint(randomInts[i]))
			prints++;
		if (islower(randomInts[i]))
			lowers++;
		if (isupper(randomInts[i]))
			uppers++;
		if (isspace(randomInts[i]))
			spaces++;
		if (ispunct(randomInts[i]))
			puncts++;
		if (isxdigit(randomInts[i]))
			xdigits++;
	}

	printf("数字：%d", digits);
	printf("\n字母：%d", alphas);
	printf("\n数字字母：%d", alnums);
	printf("\n控制字符：%d", cntrls);
	printf("\nascii字符：%d", asciis);
	printf("\n可显示字符：%d", graphics);
	printf("\n可打印字符：%d", prints);
	printf("\n小写字母：%d", lowers);
	printf("\n大写字母：%d", uppers);
	printf("\n空格：%d", spaces);
	printf("\n标点：%d", puncts);
	printf("\n十六进制数：%d", xdigits);
	
	return 0;
}
