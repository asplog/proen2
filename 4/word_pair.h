#include<stdint.h>
typedef struct
{
	char	longer_word[10];
	char	shorter_word[10];
	char	combined_word[20];
	int	longer_word_length;
	int	shorter_word_length;
}
word_pair_t;
word_pair_t create_word_pair(intptr_t s,intptr_t l)
{
	word_pair_t word_pair = {0};
	if
	(
		(strlen(l)<strlen(s))||
		(
			strlen(s)==strlen(l)&&strcmp(l,s)<0
		)
	)
	{
		s^=l;
		l^=s;
		s^=l;
	}
	word_pair.shorter_word_length = strlen(s);
	word_pair.longer_word_length = strlen(l);
	strcat(word_pair.combined_word,s);
	strcat(word_pair.combined_word,l);
	strcat(word_pair.shorter_word,s);
	strcat(word_pair.longer_word,l);
	return word_pair;
}
