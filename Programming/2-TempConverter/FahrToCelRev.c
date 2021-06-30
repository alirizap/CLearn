#include <stdio.h>

int main() {
	float fahr, cel;
	int upper, lower;

	upper = 300;
	lower = 0;

	printf("Fahrenheit\t\tCelsius\n");
	fahr = upper;
	for (fahr; fahr >= 0.0; fahr=fahr-20.0) {
		cel = (5.0/9.0) * (fahr - 32);
		printf("%3.0f\t\t%6.1f\n", fahr, cel);
	}

	return 0;
}
