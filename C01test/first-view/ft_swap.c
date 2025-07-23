#include <stdio.h>

void ft_swap(int *a, int  *b)
{
    int temp;

    temp = *a ;
    *a = *b;
    *b = temp;
}
int main()
{
    int r;
    int c;
    r = 10;
    c = 40;
    printf("%d, %d", r, c);
    ft_swap(&r, &c);
    printf(",%d, %d", r, c);
    return 0;
}
