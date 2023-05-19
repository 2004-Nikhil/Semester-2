/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q10. Write a C program to carry out the following:
    (a) Write a paragraph in “input.txt” read the same file. 
    (b) Print each word in reverse order of “input.txt”
*/
#include <stdio.h>
#include <string.h>
void reverseWord(char word[]) 
{
    int l = strlen(word);
    int start = 0;
    int end = l - 1;
    while (start < end) 
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    FILE *file;
    char words[100][100], ch;
    int i, wordCount = 0;

    file = fopen("input.txt", "w");
    if (file == NULL) 
    {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the lines .\n");
    while ((ch = getchar()) != EOF)
        fputc(ch, file);

    fputc(32, file);
    fclose(file);

    file = fopen("input.txt", "r");
    if (file == NULL) 
    {
        printf("Error opening the file.\n");
        return 1;
    }

    while ((ch = getc(file)) != EOF) 
    {
        i = 0;
        words[wordCount][i++] = ch;
        while ((ch = getc(file)) != 32)
            words[wordCount][i++] = ch;
        words[wordCount][i] = '\0';
        reverseWord(words[wordCount]);
        wordCount++;
    }

    fclose(file);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for (int i = 0; i < wordCount; i++) 
    {
        printf("%s ", words[i]);
    }
    return 0;
}