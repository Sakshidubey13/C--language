#include <stdio.h>

// User Defined Function to find cube using pointer
void findCube(int *p, int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            int val = *(p + i * cols + j); // Access element using pointer
            printf("Cube of a[%d][%d] = %d\n", i, j, val * val * val);
        }
    }
}

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; 

    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    findCube(&arr[0][0], rows, cols);

    return 0;
}
