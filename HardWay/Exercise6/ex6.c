#include<stdio.h>

int main(int argc, char *argv)
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4322;
	char first_name[] = "Alireza";
	char last_name[] = "Pishdar";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("My whole name is %s %s.\n", first_name, last_name);

	return 0;
}
