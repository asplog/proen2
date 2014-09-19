#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
	int length = 0;
	if(write(1,"input ",6))
	if(write(1,"length ",7))
	while(1)
	{
		int8_t buffer = getchar() - '0';
		if(0<=buffer&&buffer<=9)length = length * 10 + buffer;
		else break;
	}
	if(length)
	{
		int8_t*buffer = calloc(length+1,1);
		if(buffer)
		{
			if(write(1,"input ",6))
			if(write(1,"string ",7))
			while(0<length--)				
				buffer[length]=putchar(toupper(getchar()));
			puts(buffer);
			free(buffer);
		}
	}
	else length = 1;
	return length;
}
