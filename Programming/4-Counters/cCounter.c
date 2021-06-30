// Char Counter

#include <stdio.h>


int main() {
	int nc;

	nc = 0;

	while (getchar() != EOF)
		nc++;

	printf("\n%d\n", nc);
	return 0;
}
