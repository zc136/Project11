#include<stdio.h>
int main()
{
	char a = -1;
	//ԭ??10000000  00000000  00000000  00000001 
	//????11111111  11111111  11111111  11111110
	//????11111111  11111111  11111111  11111111
	// 11111111
	signed char b = -1;
	// 11111111
	unsigned char c = -1;
	//    00000000  00000000  00000000 11111111
	printf("a=%d,b=%d,c=%d", a, b, c);
	// -1  -1  255
	return 0;
}