#include <stdio.h>

int main() {

	int c;

	c = getchar();
	while ((c=getchar()) != EOF) {
		putchar(c);
	}
	printf("\n");

	return 0;
}
