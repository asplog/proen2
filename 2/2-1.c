#include<stdio.h>
#include<stdint.h>
int main(int argc,char**argv)
{
	intptr_t a, p;
	
	a=10;
	printf("a: %d\n",a);//value of a
	printf("&a: %p\n\n",&a);//address of a

	p = &a;//assign address of a into p
	printf("p: %p\n",p);//value of p, address of a
	printf("*p: %d\n",*(intptr_t*)p);//value referred from p, value of a
	printf("&p: %p\n\n",&p);//address of p

	a = 20;//assign 20 into a
	printf("a: %d\n",a);//value of a
	printf("&a: %p\n\n",&a);//address of a

	printf("p: %p\n",p);//value of p, address of a
	printf("*p: %d\n",*(intptr_t*)p);//value referred from p, value of a, it was changed
	printf("&p: %p\n\n",&p);//address of p

	return 0;
}
