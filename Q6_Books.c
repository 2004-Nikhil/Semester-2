/*
    Name                  :   Nikhil Nawani
    University Roll no    :   2021330
    Section               :   D
    Q6. Write a C program to create a structure containing book information like accession 
    number, name of author, book title and flag to know whether book is issued or not. 
    Create a menu in which the following can be done.
    1 - Display book information 
    2 - Add a new book 
    3 - Display all the books in the library of a particular author 
    4 - Display the number of books of a particular title 
    5 - Display the total number of books in the library 
    6 - Issue a book 
    (If we issue a book, then its number gets decreased by 1 and if we add a book, its number 
    gets increased by 1)
*/
#include <stdio.h>
#include <string.h>
struct book
{
    int acc, flag;
    char auth[20], title[20];
};
int main()
{
    struct book B[20], tt;
    int c = 0, x, i, a, no;
    char author[20], t[20], ch;
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    do
    {
        printf("Press 1 to Display book information\n");
        printf("Press 2 to Add a new book \n");
        printf("Press 3 to Display all books of a particular author \n");
        printf("Press 4 to Display total books of a particular title \n");
        printf("Press 5 to Display total books in the library \n");
        printf("Press 6 to Issue a book \n");
        printf("Press 7 to Exit\n");
        scanf("%d", &x);
        getchar();
        switch (x)
        {
            case 1: printf("Enter accession number: ");
                    scanf("%d", &a);
                    for (i = 0; i < c; i++)
                    {
                        if (a == B[i].acc)
                        {
                            printf("Book title: %s", B[i].title);
                            printf("Book author: %s", B[i].auth);
                        }
                    }
                    break;
            case 2: printf("Enter Book title: ");
                    fgets(B[c].title, 20, stdin);
                    printf("Enter Book author: ");
                    fgets(B[c].auth, 20, stdin);
                    printf("Enter accession number: ");
                    scanf("%d", &B[c].acc);
                    B[c].flag = 0;
                    c++;
                    break;
            case 3: printf("Enter author name: ");
                    fgets(author, 20, stdin);
                    for (i = 0; i < c; i++)
                    {
                        if (strcmpi(author, B[i].auth)==0)
                            puts(B[i].title);
                    }
                    break;
            case 4: printf("Enter title: ");
                    fgets(t, 20, stdin);
                    no = 0;
                    for (i = 0; i < c; i++)
                    {
                        if (strcmpi(t, B[i].title)==0)
                            no++;
                    }
                    printf("Books = %d\n", no);
                    break;
            case 5: printf("Total books = %d\n", c);
                    break;
            case 6: printf("Enter name of book to be issued: ");
                    fgets(t, 20, stdin);
                    for (i = 0; i < c; i++)
                    {
                        if (strcmpi(t, B[i].title)==0)
                        {
                            B[i].flag = 1;
                            tt = B[i];
                            B[i] = B[c];
                            B[c] = tt;
                        }
                    }
                    c--;
                    printf("The book is issued\n");
                    break;
            default: break;
        }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &ch);
        getchar();
    } while (ch == 'Y');
    return 0;
} 