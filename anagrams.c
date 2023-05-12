/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q3. Write a C program to check if the two strings entered by user are anagrams or
    not. Two wordsare Said to be anagrams if the letters of one word can be rearranged
    to form the other word.
*/
void sor(char [],int);
#include<stdio.h>
#include<string.h>
int main()
{
    char st1[50],st2[50];
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter two words \n");
    gets(st1);
    gets(st2);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    int l1 = strlen(st1);
    int l2 = strlen(st2);
    if(l1!=l2)
    {
        printf("They are not Anagram\n");
    }
    else
    {
        sor(st1,l1);
        sor(st2,l2);
        int i=0;
        while(st1[i]!='\0')
        {
            if(st1[i]!=st2[i])
            {
                printf("They are not Anagram\n");
                return 0;
            }
            i++;
        }
        printf("They are Anagram words\n");
    }
    return 0;
}
void sor(char a[],int l)
{
    int i,j;
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                char c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
}