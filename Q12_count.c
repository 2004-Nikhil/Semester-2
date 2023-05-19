/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q12. Write a C program to input a paragraph inside a file “File.txt” and count no. of 
    characters and digits in each line and store the count in “Count.txt” file line by line.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[100], ch;
    int charCount, digitCount;
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the lines.\n");
    while ((ch = getchar()) != EOF)
        fputc(ch, inputFile);
    fclose(inputFile);
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("Count.txt", "w");
    if (outputFile == NULL) {
        printf("Error creating the output file.\n");
        fclose(inputFile);
        return 1;
    }
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        charCount = 0;
        digitCount = 0;

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] >= 48 && line[i] <= 57)
                digitCount++;
            else if(line[i]!='\n')
                charCount++;
        }
        fprintf(outputFile, "Characters: %d, Digits: %d\n", charCount, digitCount);
    }
    fclose(inputFile);
    fclose(outputFile);
    outputFile =  fopen("Count.txt", "r");
    printf("\n\t\t\t\t\t\t*****OUTPUT*****\n");
    while ((ch = fgetc(outputFile)) != EOF)
        putchar(ch);
    fclose(outputFile);
    return 0;
}