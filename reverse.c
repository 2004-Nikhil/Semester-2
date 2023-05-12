/*  
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q5. Write a C function reverse to reverse the digits of a number using pointer 
    which receives number as an argument. 
    In calling function(main) check that the inputted number is palindrome or not.
*/
#include<stdio.h>
#include<stdlib.h>
void reverse(int, int *);
int main() 
{
    int n, x;
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the numbers\n");
    scanf("%d", &n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    reverse(n, &x);
    if(x == n)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome");
    }    
    return 0;
}
void reverse(int n, int *p) 
{
    *p = 0;
    while(n) 
    {
        *p = *p * 10 + n%10;
        n /= 10;
    }
}