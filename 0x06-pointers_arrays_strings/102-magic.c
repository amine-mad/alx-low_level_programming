#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    *(p + 7) = 98;

    printf("a[2] = %d\n", a[2]); // Output: a[2] = 98

    return 0;
}

