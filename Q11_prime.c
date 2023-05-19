/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q11.Write a program to read 20 integers in a file. Separate them into two different 
    files prime.txt and nonprime.txt such that all prime numbers are copied in prime.txt 
    and remaining numbers in nonprime.txt.
*/
int isPrime(int); 
#include <stdio.h>
int main() 
{
    FILE *inputFile, *primeFile, *nonPrimeFile;
    int i,n,number;
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) 
    {
        printf("Failed to open the input file.\n");
        return 1;
    }
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter 20 number \n");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&n);
        putw(n, inputFile);
    }
    fclose(inputFile);
    inputFile = fopen("input.txt", "r");
    primeFile = fopen("prime.txt", "w");
    nonPrimeFile = fopen("nonprime.txt", "w");
    if (primeFile == NULL||nonPrimeFile == NULL) 
    {
        printf("Failed to open the file.\n");
        return 1;
    }
    for (i = 1; i <= 20; i++) 
    {
        n = getw(inputFile);
        if (isPrime(n))
            putw(n, primeFile);
        else
            putw(n, nonPrimeFile);
    }
    fclose(inputFile);
    fclose(primeFile);
    fclose(nonPrimeFile);
    primeFile = fopen("prime.txt", "r");
    nonPrimeFile = fopen("nonprime.txt", "r");
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("Prime numbers: "); 
    while((n = getw(primeFile)) != EOF) 
        printf("%d ", n); 
    printf("\nNon Prime numbers: "); 
    while((n = getw(nonPrimeFile)) != EOF) 
        printf("%d ", n); 
    
    fclose(primeFile);
    fclose(nonPrimeFile);
    return 0;
}
int isPrime(int num) 
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}