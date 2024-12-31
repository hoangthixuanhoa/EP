#include <stdio.h>

int main() {
    // 1. Create a char type variable and initialize it to value 100
    char var = 100;

    // 2. Print the address of the above variable
    printf("Address of var: %p\n", &var);

    // 3. Create a pointer variable and store the address of the above variable
    char *ptr = &var;

    // 4. Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
    char data = *ptr;

    // 5. Print the data obtained from the read operation on the pointer
    printf("Data obtained from pointer read: %d\n", data);

    // 6. Perform write operation on the pointer to store the value 65
    *ptr = 65;

    // 7. Print the value of the variable defined in step 1
    printf("New value of var: %d\n", var);

    return 0;
}
