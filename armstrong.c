#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, remainder;
    int digits = 0;
    int sum = 0;

    scanf("%d", &num);

    temp = num;

    // Count the number of digits
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate Armstrong sum
    while (temp != 0)
    {
        remainder = temp % 10;

        sum = sum + pow(remainder, digits);

        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}