typedef struct student
{
    int r;
    int yy;
    char na[50];
    char depa[50];
    char cou[50];
}St;
void year(St[]);
void detail(St[]);
int main()
{
    St S[450],*p;
    p=&S;
    int i,py,ro;
    for(i=0;i<450;i++)
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
    year(S);
    detail(S);
    return 0;
}
void year(St S[])
{
    
}