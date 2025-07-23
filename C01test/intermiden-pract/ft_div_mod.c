#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main ()
{
    int     dividend;
    int     divisor;
    int     division_result;
    int     remainder_result;

    dividend = 20;
    divisor = 10;

    printf("Befor : div_res = (garbage), mod_res = (garbage)\n ");
    ft_div_mod(dividend, divisor, &division_result, &remainder_result);

    printf("After : div_res = %d, mod_res = %d\n", division_result, remainder_result);
    return (0);
}