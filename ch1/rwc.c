// Read Write Close file sampl program

#include <stdio.h>
#include <string.h>

int main(void) 
{
    FILE *file;

    char dataToBeWritten[55] = "Hello World";

    file = fopen("temp.txt", "w");
    if(file == NULL) {
        printf("temp.txt file failed to open.");
    } else {
        printf("The file is now opened.\n");

        if (strlen(dataToBeWritten) > 0) {
            fputs(dataToBeWritten, file);
            fputs("\n", file);
        }

        fclose(file);

        printf("Data succsessfully written in file\n");
        printf("The file is now closed!\n");
    }

    return 0;
}