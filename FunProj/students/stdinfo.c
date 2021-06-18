#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


long int getStdNumber(void);
float getWeight(void);
float getHeight(void);
void saveToFile(int user_n, char name[], long int num, float w, float h);

int main(void) {
    char names[100][64];
    long int std_numbers[100];
    float weights[100], heights[100];
    int user = 0;
    char get_std[10];
    int i;

    printf("Enter Studen Details: For exit click CTRL + Z in name field and Enter !!\n");
    for(;;) {
        printf("Enter Name: ");
        if (fgets(names[user], 64, stdin) == NULL) {
            break;
        }
        std_numbers[user] = getStdNumber();
        weights[user] = getWeight();
        heights[user] = getHeight();
        saveToFile(user, names[user], std_numbers[user], weights[user], heights[user]);
        user++;
    }

	for(i = 0; i < user; i++)
	{
		printf("\n========================================\n");
        printf("User %d\n", i+1);
        printf("Name: %s\n", names[i]);
        printf("Student number: %ld \n", std_numbers[i]);
        printf("Weight: %.2f \n", weights[i]);
        printf("height: %.2f \n", heights[i]);
		printf("========================================\n\n");
	}
    return 0;

}

long int getStdNumber(void) {
    char input[32];
    long int out;

    for(;;) {
        printf("Enter Std Number: (9 digit) ");
        fgets(input, 32, stdin);
        if (sscanf(input, "%9ld", &out) != 1) {
            printf("Enter Valid Std Number!!\n");
            continue;
        }
        break;
    }
    return out;
}

float getWeight(void) {
    char input[32];
    float out;

    for(;;) {
        printf("Enter Weight: ");
        fgets(input, 32, stdin);
        if(sscanf(input, "%f", &out) != 1 || out < 20 || out > 200) {
            printf("Enter Valid Weight!! ( Weight must be 20 - 200) \n");
            continue;
        }
        break;
    }
    return out;
}

float getHeight(void) {
    char input[32];
    float out;

    for(;;) {
        printf("Enter Height: ");
        fgets(input, 32, stdin);
        if(sscanf(input, "%f", &out) != 1 || out < 30 || out > 220) {
            printf("Enter Valid Height!! (Height must be 30-220)\n");
            continue;
        }
        break;
    }
    return out;
}

void saveToFile(int user_n,char name[], long int num, float w, float h) {
    
    char *filename = "students.txt";

    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        exit(1);
    }
    fprintf(fp, "User %d\nName: %s\nStudent Number: %ld\nWeight: %.2f\nHeight: %.2f\n\n",
            user_n, name, num, w, h);
    fclose(fp);
}