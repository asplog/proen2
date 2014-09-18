#include<stdio.h>
#include<stdint.h>
//this program is designed for little endian
int main(int argc,char**argv)
{
	uint16_t source = 0;
	uint16_t count[2] = {0};
	enum{WORD = 0,TH = 1};
	while(1==read(0,&source,1))
	{
		switch(source)
		{
		case 't'<<8|'h':
		case 'T'<<8|'h':
			++count[TH];
			break;
		}
		++count[WORD];
		source<<=8;
	}
	printf("word count: %d\n",count[WORD]);
	printf("th count: %d\n",count[TH]);
	return 0;
}
