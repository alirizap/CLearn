// Count Word line cahr

#include <stdio.h>

#define IN 1	// Inside a word
#define OUT 0	// Outside a word

int main() {
	int c, nl, nc, nw, state;

	state = OUT;
	nl = nc = nw = 0;

	while ((c=getchar()) != EOF) {
		nc++;
 		
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		
		else if (state == OUT) {
			state = IN;
			nw++;
		}
	}
	printf("%d\t%d\t%d\n",nc, nw, nl); 

	return 0;
}


