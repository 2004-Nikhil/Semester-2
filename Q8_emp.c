/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q8. Write a C program to create a student structure having fields emp_name, 
    emp_ID and address. Accept the details of 'n' employees, rearrange the data in 
    alphabetical order of employee name and display it. Print the rearrange records.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    char na[50];
    int id;
    char add[50];
    
}St;
int main()
{
    St *p;
    int i,j,n,te;
    char t[50];
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the number of employees \n");
    scanf("%d",&n);
    p = (St *)malloc(n * sizeof(St));
    for(i=0;i<n;i++)
    {
        printf("Enter the emp_name,emp_ID and address \n");
        scanf("%s",(p+i)->na);
        scanf("%d",&(p+i)->id);
        getchar();
        scanf("%s",(p+i)->add);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmpi((p+j)->na,(p+j+1)->na)>0)
            {
                strcpy(t,(p+j)->na);
                strcpy((p+j)->na,(p+j+1)->na);
                strcpy((p+j+1)->na,t);

                strcpy(t,(p+j)->add);
                strcpy((p+j)->add,(p+j+1)->add);
                strcpy((p+j+1)->add,t);

                te=(p+j)->id;
                (p+j)->id=(p+j+1)->id;
                (p+j+1)->id=te;
            }
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=0;i<n;i++)
    {
        printf("The emp_name = %s\n",(p+i)->na);
        printf("The emp_ID = %d\n",(p+i)->id);
        printf("The address = %s\n",(p+i)->add);
        printf("\n");
    }
    return 0;
}