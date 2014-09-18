#include<stdio.h>
const char string[] = "winter";
int main(int argc,char**argv)
{
	char*p1,*p2;
	p1 = p2 = string;
	while(*p1)++p1;
	while(p1-p2)putchar(*(--p1));
	putchar('\n');
	return 0;
}
