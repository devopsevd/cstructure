//comment added in visual studio code.
// comment added in github
//comment from harshita vs

#include <stdio.h>
#include <string.h>
struct book
    {
        char book_name[50];
        char author_name[50];
        int edition;
        char publication[50];
        int year;
        float price;
    };
void printstruct(struct book *);

int main()
{
    int option;
    char b_name[50];
    
    struct book B1, *bb;
    bb = &B1;
    do {
    printf("\nEnter 1 to create a book, 2 to print the data, 3 to exit:\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("Enter book name:\n");
        scanf("%s",&B1.book_name);
        printf("Enter author name:\n");
        scanf("%s",&B1.author_name);
        printf("Enter edition number:\n");
        scanf("%d",&B1.edition);
        printf("Enter name of the publication:\n");
        scanf("%s",&B1.publication);
        printf("Enter year of the publication:\n");
        scanf("%d",&B1.year);
        printf("Enter price of the book:\n");
        scanf("%f",&B1.price);
        printf("\nEntered details:");
        printstruct(&B1);
        break;
    case 2:
        printf("Enter book name:\n");
        scanf("%s",&b_name);
        printf("\nstring compare:%d",strcmp(b_name,bb->book_name));
        if(!strcmp(b_name,bb->book_name)){
            printf("\nBook exists!, here are the details:");
        } else {
            printf("\nBook does not exit, exiting");
        }
        printstruct(bb);
        break;

    default:
        break;
    }
    } while (option!=3);
  


        return 0;
}

void printstruct(struct book *ptr)
{
    printf("\nBook Name:%s",ptr->book_name);
    printf("\nAuthor Name:%s",ptr->author_name);
    printf("\nEdition number:%d",ptr->edition);
    printf("\nPublication number:%s",ptr->publication);
    printf("\nYear of publication:%d",ptr->year);
    printf("\nPrice:%f",ptr->price);
}
