
#include <stdio.h>

int main()
{
    int rows;
    scanf("%d",&rows);

    // This loop for pyramid from top to bottom
    for (int i = 0; i < rows; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        // This loop for printing * character in each row
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}