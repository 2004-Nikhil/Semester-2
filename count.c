#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[100];
    int charCount, digitCount;

    // Open the input file
    inputFile = fopen("File.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Open the output file
    outputFile = fopen("Count.txt", "w");
    if (outputFile == NULL) {
        printf("Error creating the output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read the input file line by line
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        charCount = 0;
        digitCount = 0;

        // Count the number of characters and digits in the line
        for (int i = 0; line[i] != '\0'; i++) {
            if ((line[i]>=65 && line[i]<=90)||(line[i]>=97 && line[i]<=122))
                charCount++;
            else if (line[i]>=48 && line[i]<=57)
                digitCount++;
        }

        // Write the counts to the output file
        fprintf(outputFile, "Characters: %d, Digits: %d\n", charCount, digitCount);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Counts have been written to Count.txt\n");

    return 0;
}