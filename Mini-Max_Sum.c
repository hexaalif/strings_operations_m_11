#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5];

    long long int sum1 = 0;
    long long int sum2 = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        // sum = sum + arr[i] - i;
    }
    // int max = INT_MIN;
    // int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0, j = 1; i < 4, j < 5; i++, j++)
    {

        sum1 = sum1 + arr[i];
        sum2 = arr[j] + sum2;
        // printf("%d ", arr[i]);
    }
    printf("%lld %lld", sum1, sum2);
    return 0;
}