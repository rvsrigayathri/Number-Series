#include <stdio.h>

int main()
{
    int num, temp, remainder;
    int sum = 0;

    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;

        int fact = 1;

        for (int i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if (sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}