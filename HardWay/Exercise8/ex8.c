#include<stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 12, 15, 20};
	char name[] = "Alireza";
	char full_name[] = {
		'A', 'L', 'I', 'R', 'E', 'Z', 'A',
		' ', 'P', 'I', 'S', 'H', 'D', 'A', 'R', '\0'};

	printf("The size of an int : %ld.\n", sizeof(int));
	printf("The size of areas (int[]): %ld \n", sizeof(areas));
	printf("The number of ints in areas: %ld \n", 
			sizeof(areas)/sizeof(int));
	printf("The first area is %d, the 2nd area is %d.\n",
			areas[0], areas[1]);
	printf("The size of a char: %ld.\n", sizeof(char));
	printf("The size of name: %ld \n", sizeof(name));
	printf("The number of chars: %ld \n", 
			sizeof(name)/sizeof(char));
	printf("The size of full name: %ld \n", sizeof(full_name));
	printf("The number of chars: %ld \n", 
			sizeof(full_name) / sizeof(char));

	return 0;
}
