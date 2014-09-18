#include<stdio.h>
#define __FILEPATH__ "helloworld.txt"
#define __BUFFSIZE__ 256
const char*__MESSAGES__[]={"Hello world!!","When I woke up this morning, I found many people in my room.","What's up?? :-("};
int main(int argc,char**argv)
{
	FILE*fp=fopen(__FILEPATH__,"w");
	if(fp)
	{
		int n;
		for(n=0;n<sizeof(__MESSAGES__)/sizeof(*__MESSAGES__);++n)
			fputs(__MESSAGES__[n],fp),fputc('\n',fp);
		fclose(fp),fp=0;
	}
	return!fp;
}
