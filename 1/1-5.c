#include<stdio.h>
#include<memory.h>
#include"gift.h"
#define __I_FILENAME__ "gifts1.dat"
#define __O_FILENAME__ "gifts2.dat"
#define __I_FORMAT__ "%s %s %d"
#define __UNDEF__ "xxxx"
int main(int argc,char**argv)
{
	FILE*ifp=fopen(__I_FILENAME__,"r");
	FILE*ofp=fopen(__O_FILENAME__,"w");
	if(ifp&&ofp)
	{
		gift_t gift={0};
		while(0<fscanf(ifp,__I_FORMAT__,gift.code,gift.name,&gift.price))
		{
			fprintf(ofp,"code: %s\n",gift.code);
			fprintf(ofp,"name: %s\n",gift.name);
			if(gift.price)	
				fprintf(ofp,"price: %d\n",gift.price);
			else
				fprintf(ofp,"price: %s\n",__UNDEF__);
			fputs("\r\n",ofp);
			
			bzero(&gift,sizeof(gift));
		}
		fclose(ofp),ofp=0;
		fclose(ifp),ifp=0;
	}
	else if(ofp)fclose(ofp),ofp=0;
	else if(ifp)fclose(ifp),ifp=0;
	return!(ifp&&ofp);
}
