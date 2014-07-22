单字节字符处理函数在`ctype.h`(c++的`cctype`)中声明。宽字节字符处理函数在`wctype.h`(c++的`cwctype`)中声明。

|单字节|宽字节|描述|
|:------|:------|:------|
|isalnum | 	iswalnum | 	是否为字母数字|
|isalpha |	iswalpha |	是否为字母|
|islower |	iswlower |	受否为小写字母|
|isupper |	iswupper |	是否为大写字母|
|isdigit |	iswdigit |	是否为数字|
|isxdigit| 	iswxdigit|	是否为16进制数字|
|iscntrl |	iswcntrl |	是否为控制字符|
|isgraph |	iswgraph |	是否为图形字符（例如，空格、控制字符都不是）|
|isspace |	iswspace |	是否为空格字符（包括制表符、回车符、换行符等）|
|isblank |	iswblank |	是否为空白字符 (c99/c++11新增)（包括水平制表符）|
|isprint |	iswprint |	是否为可打印字符|
|ispunct |	iswpunct |	是否为标点（除空格和字母数字外的可打印字符）|
|tolower |	towlower |	转换为小写|
|toupper |	towupper |	转换为大写|
|不适用 	 |  iswctype |	检查一个wchar_t是否是属于指定的分类|
|不适用 	 |  towctrans|	使用指定的变换映射来转换一个wchar_t（实际上是大小写的转换）|
|不适用 	 |  wctype 	 |  返回一个宽字符的类别，用于iswctype函数|
|不适用 	 |  wctrans  |	返回一个变换映射，用于 towctrans|

int isascii(int c)  检查参数c是否为ASCII码字符，也就是判断c的范围是否在0到127之间 这个有吗？

参照 wikipedia [Cctype](http://zh.wikipedia.org/wiki/Cctype)
