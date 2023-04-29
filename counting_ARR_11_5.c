#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cont[7] = {0};
    for (int i = 0; i < n; i++)
    {
        // if(a[i]==0){
        //     cont[0]++;
        // }
        // if(a[i] == 1){
        //     cont[1]++;
        // }
        int val = a[i];
        cont[val]++;
    }
    printf("0 - %d\n", cont[0]);
    printf("1 - %d\n", cont[1]);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d", i, cont[i]);
    }
    return 0;
}