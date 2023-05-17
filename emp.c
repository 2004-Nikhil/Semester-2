#include <stdio.h>
#include <string.h>
typedef struct student
{
    char na[50];
    int id;
    char add[50];
    
}St;
int main()
{
    St *p;
    int i,j,n;
    printf("Enter the number of employees \n");
    scanf("%d",&n);
    p = (St *)malloc(n * sizeof(St));
    for(i=0;i<n;i++)
    {
        printf("Enter the emp_name,emp_ID and address \n");
        scanf("%s",(p+i)->na);
        scanf("%s",(p+i)->id);
        getchar();
        scanf("%s",(p+i)->add);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;i++)
        {
            if(strcmp((p+j)->na,(p+j+1)->na)>0)
            {
                
            }
        }
    }
    return 0;
}