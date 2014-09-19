#include<stdio.h>
int main(int argc,char**argv)
{
	char*name[5]={0};
	int n,N;
	for(N=0;N<5;++N)
	{
		int length = 0;
		char buff[20]={0};
		if(!(scanf("%s",buff)&&(length=strlen(buff))))break;
		name[N]=calloc(1,length);
		memcpy(name[N],buff,length);
	}
	for(n=0;n<N;++n)
	{
		printf("%x %s\n",name[n],name[n]);
		free(name[n]);
	}
	return 0;
}
