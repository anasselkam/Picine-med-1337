#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b)
{
    int     temp_a;
    temp_a = *a;
    *a = temp_a /  *b;
    *b=  temp_a % *b;
}
int main (void)
{
    int val1;
    int val2;

    val1 =20;
    val2 = 15;

    printf("Before : val1 = %d, val2 = %d\n",val1, val2 );

    ft_ultimate_div_mod(&val1, &val2);
    printf("After : val1 = %d, val2 = %d\n", val1, val2);

    return (0);
    
}