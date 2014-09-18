#include<stdio.h>
int main(int argc,char**argv)
{
	//boring
	char c, *p;
	char s[] = "Ritsumeikan";
	
	p = &c;	

	c = 'A';
	printf("c: %c\n",c);
	printf("&c: %p\n\n",&c);

	printf("p: %p\n",p);
	printf("*p: %c\n\n",*p);

	*p = 'B';
	printf("c: %c\n",c);
	printf("&c: %p\n\n",&c);

	printf("p: %p\n",p);
	printf("*p: %c\n\n",*p);

	printf("s: %s\n",s);
	printf("s[0]: %c\n",s[0]);
	printf("s[1]: %c\n\n",s[1]);

	printf("p: %p\n",s);
	printf("&s[0]: %p\n\n",&s[0]);

	printf("p: %p\n",s);
	printf("*(s+1): %c\n\n",*(s+1));

	*(s+2)='T';
	printf("s: %s\n",s);


	return 0;
}
