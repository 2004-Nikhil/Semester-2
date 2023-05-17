#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f1, *f2;
    char word[100];
    char ch;
    int i=0;
    f1 = fopen("Data.txt", "w");
    f2 = fopen("Del.txt", "w");
    if (f1 == NULL||f2 == NULL) 
    {
        printf("Error in using the file.\n");
        return 1;
    }
    while((ch=getchar())!=EOF)
        fputc(ch,f1);
    fclose(f1);
    f1 = fopen("Data.txt", "r");
    while ((ch=getc(f1))!=EOF) 
    {
        i=0;
        word[i++]=ch;
        while((ch=getc(f1))!=32)
            word[i++]=ch;
        word[i]='\0';
        if (strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0)
            fputc(f2, " ");
        else 
            fputc(f2,word);
    }
    fclose(f1);
    fclose(f2);
    f2 = fopen("Del.txt", "r");
    while((ch=fgetc(f2))!=EOF)
    printf("%c",ch);
    fclose(f2);
    return 0;
}