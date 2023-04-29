#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        printf("%s", s[i]);
    }
    printf("\n");
    return 0;
}