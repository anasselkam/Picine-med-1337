#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);

}
void	ft_print_comb(void)
{
	char	a;
	char	b;
	char 	c;
    for( a = '0'; a <='7'; a++)
{
        for( b = a + 1; b <= '8'; b++)
   {
	    for( c = b+1; c <= '9'; c++)
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
    if( !(a == '7' && b == '8' && c == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
                }
  }
}
}
int main () 
{
	ft_print_comb();
	return (0) ;
}
