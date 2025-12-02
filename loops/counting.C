#include <stdio.h>
#include <string.h>

int main()
{
	char word[200] = "The quick brown fox jumps over a lazy dog";
	int i, counta = 0;

	printf("\n%s", word);

	for (i = 0; i < strlen(word); i++)

	{
		counta++;
	}

	printf("\n\n Total Number of words in sentence = %d", counta);

	return 0;
}