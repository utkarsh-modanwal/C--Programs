#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *temp;
    int i;

    // malloc
    p = (int *)malloc(3 * sizeof(int));

    if (p == NULL)
    {
        printf("Malloc failed");
        return 1;
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    // realloc (SAFE WAY)
    temp = (int *)realloc(p, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("Realloc failed");
        free(p);
        return 1;
    }

    p = temp;

    p[3] = 40;
    p[4] = 50;

    // PRINT OUTPUT
    printf("Output:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}
