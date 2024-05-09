#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter two values: ");

    scanf("%d %d", &n, &m);
    int *ptr = &n;

    printf("Value of n: %d\n", n);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = m;

    printf("Updated value of n: %d\n", n);

    return 0;
}
