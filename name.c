/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q2 .Write a C program that takes your full name (First, middle and last) as input
    and displays theabbreviations of the first and middle names except the last name 
    which is displayed as it is.
*/

#include<string.h>
#include<stdio.h>
int main()
{
    char st[100];
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the string\n");
    gets(st);
    int i,j,l = strlen(st),ls;
    for(i=l-1;i>=0;i--)
    {
        if(st[i]==' ')
        {
            ls=i;
            break;
        }
    }
    printf("%c.",st[0]);
    for(i=0;i<ls;i++)
    {
        if(st[i]==' ')
        {
            printf("%c.",st[i+1]);
        }
    }
    for(i=ls+1;i<l;i++)
    {
        printf("%c",st[i]);
    }
    printf(".");
    return 0;
}