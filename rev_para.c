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
    char word[100],ch;
    int i,wordCount = 0;
    file = fopen("input.txt", "w");
    if (file == NULL) 
    {
        printf("Error opening the file.\n");
        return 1;
    }
    while((ch=getchar())!=EOF)
        fputc(ch,file);
    fclose(file);
    file = fopen("input.txt", "r");
    if (file == NULL) 
    {
        printf("Error opening the file.\n");
        return 1;
    }
    while ((ch=getc(file)) != EOF) 
    {
        i=0;
        word[i++]=ch;
        while((ch=getc(file))!=32)
            word[i++]=ch;
        word[i]='\0';
        reverseWord(word[wordCount++]);
    }
    fclose(file);
    for (int i = 0; i <wordCount; i--) 
    {
        printf("%s ", word[i]);
    }
    return 0;
}