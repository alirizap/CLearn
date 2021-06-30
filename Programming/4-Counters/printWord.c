// Print each word per line

#include <stdio.h>

int main() {
	int c, state;

	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == ' ' || c == '\t' || c == '\n')
			putchar('\n');
		
	}
	printf("\n");
	return 0;
}
