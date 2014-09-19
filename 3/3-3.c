#include<stdio.h>
#include"gift.h"
#define __I_FILENAME__ "gifts.dat"
#define __O_FILENAME__ "gifts.txt"
#define __I_FORMAT__ "%s %s %d"
int main(int argc,char**argv)
{
	FILE*ifp=fopen(__I_FILENAME__,"r");
	FILE*ofp=fopen(__O_FILENAME__,"w");
	if(ifp&&ofp)
	{
		int n, N = 0;
		gift_t*gift[20]={0};
		for(N=0;N<20;++N)
		{
			gift[N]=calloc(1,sizeof(gift_t));
			if(3!=fscanf(ifp,__I_FORMAT__,gift[N]->code,gift[N]->name,&gift[N]->price)){free(gift[N]);break;}
		}
		for(n=0;n<N;++n)
		{
			fprintf(ofp,"code: %s\n",gift[n]->code);
			fprintf(ofp,"name: %s\n",gift[n]->name);
			fprintf(ofp,"price: %d\n",gift[n]->price);
			fputs("\r\n",ofp);
		}
		fclose(ofp),ofp=0;
		fclose(ifp),ifp=0;
	}	
	return!(ifp&&ofp);
}
