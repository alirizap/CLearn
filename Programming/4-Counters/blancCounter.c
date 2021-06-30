#include <stdio.h>

int main() {

	int c, nb = 0;

	while ((c=getchar()) != EOF)
		if (c == ' ' || c == '\t' || c == '\n')
			nb++;
	printf("%d\n", nb);

	return 0;

}
