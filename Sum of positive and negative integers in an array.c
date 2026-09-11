#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int positiveSum = 0, negativeSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
            positiveSum += a[i];
        else if(a[i] < 0)
            negativeSum += a[i];
    }

    printf("Sum of positive numbers = %d\n", positiveSum);
    printf("Sum of negative numbers = %d\n", negativeSum);

    return 0;
}
