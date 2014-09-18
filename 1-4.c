#include<stdio.h>
#include"gift.h"
#define __FILENAME__ "gifts.dat"
#define __I_FORMAT__ "%s %s %d"
int main(int argc,char**argv)
{
	FILE*fp=fopen(__FILENAME__,"r");
	if(fp)
	{
		
		gift_t gift;
		while(3==fscanf(fp,__I_FORMAT__,gift.code,gift.name,&gift.price))
		{
			fprintf(stdout,"code: %s\n",gift.code);
			fprintf(stdout,"name: %s\n",gift.name);
			fprintf(stdout,"price: %d\n",gift.price);
			fputs("\r\n",stdout);
		}
		fclose(fp),fp=0;
	}	
	return!fp;
}
