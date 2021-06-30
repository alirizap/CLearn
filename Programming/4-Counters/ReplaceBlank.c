// Replace one or more blanks by a single blank

#include <stdio.h>

int main() {
	int c;

	while ((c=getchar()) != EOF) {
		putchar(c);
		if (c == ' ') {
			while ((c=getchar()) == ' ')
				;
			putchar(c);
		}
	}		
	return 0;
}
