#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(5 * sizeof(int));

    int *cal = (int *)calloc(5, sizeof(int));

    printf("address = %p\n", cal);

    for (int i = 0; i < 5; i++)
    {
        cal[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", cal[i]);
    }

    return 0;
}