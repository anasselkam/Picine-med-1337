#include    <stdio.h>
void    ft_swap(int    *a, int     *b)
{
    int     temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main (void)
{
    int value1;
    int value2;

    value1=50;
    value2=100;
    printf("Before sawap : value1 = %d, value2 = %d\n", value1, value2);

    ft_swap(&value1, &value2);
    printf("After sawap: value1 : %d, value2 = %d\n", value1, value2);
    return (0);
}