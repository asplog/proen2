#include<stdio.h>
#include<stdint.h>
int main(int argc,char**argv)
{
	int number[2]={0},state=0,operator='%';
	while(state<2)
	{
		int8_t buff = getchar();
		switch(buff)
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			number[state]=number[state]*10+buff-'0';
			break;
		default:
			if(++state<2)
				operator=buff;
			break;
		}
	}
	switch(operator)
	{
	case '+':
		printf("%d\n",number[0]+number[1]);
		break;
	case '-':
		printf("%d\n",number[0]-number[1]);
		break;
	case '*':
		printf("%d\n",number[0]*number[1]);
		break;
	case '/':
		printf("%d\n",number[0]/number[1]);
		break;
	default:
		printf("%d%c%d: Error\n",number[0],operator,number[1]);
		break;
	}
	return 0;
}
