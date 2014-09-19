#include<stdio.h>
#include"word_pair.h"
int main(int argc,char**argv)
{
	word_pair_t x = create_word_pair("65","4321");
	word_pair_t y = create_word_pair("654","321");
	word_pair_t z = create_word_pair("6543","21");
	printf
	(
		"%s(%d) < %s(%d) <%s\n",
		x.shorter_word,
		x.shorter_word_length,
		x.longer_word,
		x.longer_word_length,
		x.combined_word
	);
	printf
	(
		"%s(%d) < %s(%d) <%s\n",
		y.shorter_word,
		y.shorter_word_length,
		y.longer_word,
		y.longer_word_length,
		y.combined_word
	);
	printf
	(
		"%s(%d) < %s(%d) <%s\n",
		z.shorter_word,
		z.shorter_word_length,
		z.longer_word,
		z.longer_word_length,
		z.combined_word
	);
	return 0;
}
