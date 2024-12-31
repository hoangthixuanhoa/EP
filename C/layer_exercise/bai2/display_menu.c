#include <stdio.h>
#include "array_queue.h"
void menu(void)
{
    int choice;
    int value;
    do
    {
        printf("--------------------------\n");
        printf("Select an option\n");
        printf("0. Exit\n");
        printf("1. Print the length of queue\n");
        printf("2. Push element\n");
        printf("3. Pop element\n");
        printf("--------------------------\n");
        printf("Your option: ");
        scanf("%d", &choice);

        /*check*/ 
        switch (choice)
        {
        case 0:
            break;
        case 1:
            length();
            break;
        case 2:
            printf("Value: ");
            scanf("%d",&value);
            push(value);
            break;
        case 3:
            pop();
            break;
        default:
            printf("Your input value is wrong!!\n");
        }
    } while (choice != 0);
    
    return;


}