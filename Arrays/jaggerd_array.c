#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter no. of arrays");
    scanf("%d", &n);
    int *arr[n];
    int size[n];
    printf("Enter size of all arrays");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &size[i]);
        arr[i] = (int *)malloc(size[i] * sizeof(int));
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter the elements for array %d", i + 1);
        for (size_t j = 0; j < size[i]; j++)
        {
            scanf("%d", (arr[i] + j));
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < size[i]; j++)
        {
            printf("%d ", *(arr[i] + j));
        }
        printf("\n");
    }

    return 0;
}