#include<stdio.h>
void swap(int*x,int*y)
{
	*x^=*y;
	*y^=*x;
	*x^=*y;
}
int main(int argc,char**argv)
{
	int x=2, y=5;
	printf("x=%d,y=%d\n",x,y);
	swap(&x,&y);
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
