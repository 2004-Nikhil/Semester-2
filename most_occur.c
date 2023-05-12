/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q1. Write a C program to enter a string and print the particular character which 
    occurred the most with its frequency.
*/

#include<string.h>
#include<stdio.h>
int main()
{
    char st[100];
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the string\n");
    gets(st);
    int i,j,l = strlen(st),max=0,c;char mac;
    for (i = 0; i < l; i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(st[i]==st[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            mac=st[i];
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("%c  %d",mac,max);
    return 0;
}