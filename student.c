typedef struct student
{
    int r;
    int yy;
    char na[50];
    char depa[50];
    char cou[50];
}St;
void year(St[],int,int);
void detail(St[],int,int);
int main()
{
    St S[450],*p;
    p=&S;
    int i,py,ro,n;
    printf("Enter the number of students in collage \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name,department and course of Student \n");
        scanf("%s",S[i].na);
        getchar();
        scanf("%s",S[i].depa);
        getchar();
        scanf("%s",S[i].cou);
        getchar();
        printf("Enter the roll number of Student \n");
        scanf("%d",&S[i].r);
        printf("Enter the Year of joining \n");
        scanf("%d",&S[i].yy);
    }
    printf("Enter a particular year to search\n");
    scanf("%d",&py);
    printf("Enter a particular roll number to search\n");
    scanf("%d",&ro);
    year(S,py,n);
    detail(S,ro,n);
    return 0;
}
void year(St S[],int py,int n)
{
    int i;
    printf("Name of Students from that year\n");
    for(i=0;i<n;i++)
    {
        if(S[i].yy==py)
        printf("%s",S[i].na);
    }
}
void detail(St S[],int ro,int n)
{
    int i;
    printf("Detail of Student \n");
    for(i=0;i<n;i++)
    {
        if(S[i].yy==ro)
        {
            printf("Name of Students %s\n",S[i].na);
            printf("Department of Students %s\n",S[i].depa);
            printf("Course of Students %s\n",S[i].cou);
            printf("Year of joinging %d\n",S[i].yy);
        }
    }
}