#include<stdint.h>
#define __CODESIZE__ 8
#define __NAMESIZE__ 54
typedef struct
{
	uint8_t		code[__CODESIZE__];
	uint8_t		name[__NAMESIZE__];
	uint16_t	price;
}
gift_t;
