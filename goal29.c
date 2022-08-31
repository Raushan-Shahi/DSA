#include <stdio.h>

int main()
{
    int n, i, j, k, flag = 0;
    int nums[n];
    printf("enter the number of terms in array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enterthe number at index %d",i);
        scanf("%d\n", nums[i]);
    }
    return 0;
}