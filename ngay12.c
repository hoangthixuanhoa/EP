#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct
{
    int name;// element
    char c;// element

} Student; // Size of của struct này là 8 (Chứ ko phải 5 (1 của char và 4 của int))
typedef struct
{
    char name[100];// element
    char author[100];// element
    int year_public;// element
}Book;


int main(void)
{
    /*
    char name[100];
    long int id;
    char class[50];
    float score;

    char name_book[100];
    char name_author[100];
    int year_public;

    printf("SINH VIEN\n");
    printf("Name: ");
    fgets(name,sizeof(name),stdin);
    printf("ID: ");
    scanf("%d",&id);
    printf("Class: ");
    scanf("%s",class);
    printf("Score: ");
    scanf("%f",&score);

    printf("---------\n");
    printf("Name: %s",name);
    printf("ID: %d\n",id);
    printf("Class: %s\n",class);
    printf("Score: %.2f\n",score);


    printf("\n------------------\n");
    printf("BOOK\n");
    printf("Name of book: ");
    scanf("%[^\n]s",name_book);// Nhận tất cả các giá trị trừ \n; do nếu chỉ có scanf("%s") thì nó sẽ chỉ nhận đến space " "
    printf("Author name: ");
    scanf("%[^\n]s",name_author);
    printf("Year of publication: ");
    scanf("%d",&year_public);
    printf("-------------\n");
    printf("Name of book: %s\n",name_book);
    printf("Author name: %s\n",name_author);
    printf("Year of publication: %d\n",year_public);
*/
    Student st1;
    Book bk1;
    Book *p = &st1;

    strcpy(st1.name,"ABC DEF");
    //st1.name = "ABC DEF";

    return 0;
}