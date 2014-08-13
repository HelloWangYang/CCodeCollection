/*=============================================================================
#     FileName: kmpsearch.c
#         Desc: KMP Search Algorithm
#       Author: WangYang
#        Email: whseay@gmail.com
#     HomePage: http://www.cnblogs.com/whseay/
#      Version: 0.0.1
#   LastChange: 2014-08-12 09:57:06
#      History:
=============================================================================*/

#include <stdio.h>
#include <string.h>

/*求解next数组*/
void GetNext(char* p, int next[]);
/*kmp排序*/
int KmpSearch(char* s, char* p);

int main(void)
{
	char sourceStr[6] = "ababc";
	char pattern[4] = "abc";

	int result = KmpSearch(sourceStr, pattern);

	printf("%d\n", result);
	return 0;
}

void GetNext(char* p, int next[])
{
	int pLen = strlen(p);
	next[0] = -1;
	int k = -1;
	int j = 0;

	while (j < pLen - 1)
	{
		/*p[k]表示前缀,p[j]表示后缀*/
		if (k == -1 || p[j] == p[k])
		{
			++j;
			++k;
			if (p[j] != p[k])
				next[j] = k;
			else
				/*因为不能出现p[j] = p[next[j]],所以当出现时需要继续递归.k = next[k] = next[next[k]]*/
				next[j] = next[k];
		}
		else
		{
			k = next[k];
		}
	}
}

int KmpSearch(char* s, char* p)
{
	int i = 0;
	int j = 0;
	int sLen = strlen(s);
	int pLen = strlen(p);
	
	int next[pLen];
	GetNext(p, next);

	while (i < sLen && j < pLen)
	{
		/*如果j = -1,或者当前字符匹配成功(即s[i] == p[j]),都令i++,j++*/
		if (j == -1 || s[i] == p[j])
		{
			++i;
			++j;
		}
		else
		{
			/*如果j != -1,且当前字符匹配失败(即s[i] != p[j]),则令i不变,j = next[j].next[j]为j对应的next值*/
			j = next[j];
		}
	}
	if (j == pLen)
		return i - j;
	else
		return -1;
}
