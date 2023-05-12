/* 
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q4. Write a C program using dynamic memory allocation to insert elements in an array 
    and perform the following operation.
    Searching of an element.
    Replace the searched elements with its cube and print the array
*/
#include<stdio.h>
#include<stdlib.h>
void search(int *, int, int,int *);
void rep(int *, int);
int main() 
{
    int *p, n, x, pos;
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the numbers\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", (p+i));
    }
    printf("Enter element to search\n");
    scanf("%d", &x);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    search(p, x, n,&pos);
    rep(p, pos);
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }  
    return 0;
}
void search(int *p, int x, int n,int *po) 
{
    for(int i=0; i<n; i++) 
    {
        if(*(p+i) == x)
        {
            *po=i;
            break;
        }
    }
}
void rep(int *p, int pos) 
{
    *(p+pos) *= *(p+pos) * *(p+pos);
}