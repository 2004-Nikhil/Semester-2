#include <stdio.h>
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
int main() 
{
    FILE *inputFile, *primeFile, *nonPrimeFile;
    int i,n,number;
    
    // Open the input file
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) 
    {
        printf("Failed to open the input file.\n");
        return 1;
    }
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
        number = getw(inputFile);
        if (isPrime(number))
            putw(n, primeFile);
        else
            putw(n, nonPrimeFile);
    }
    fclose(inputFile);
    fclose(primeFile);
    fclose(nonPrimeFile);
    printf("Numbers separated successfully!\n");
    return 0;
}