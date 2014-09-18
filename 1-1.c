#include<stdio.h>
#include<stdint.h>
#define FILEPATH "gifts.dat"
#define BUFFSIZE 256
uint32_t main(uint32_t argc,uint8_t**argv)
{
	FILE*fp=fopen(FILEPATH,"r");
	if(fp)
	{
		const uint8_t i_format[]="%s %s %d\n";
		const uint8_t o_format[]="%s(%s) is %d yen\n";
		uint8_t id[BUFFSIZE];
		uint8_t desc[BUFFSIZE];
		uint32_t price;
		while(3==fscanf(fp,i_format,id,desc,&price))
			fprintf(stdout,o_format,id,desc,price);
		fclose(fp);
		fp=0;
	}
	return!fp;
}
