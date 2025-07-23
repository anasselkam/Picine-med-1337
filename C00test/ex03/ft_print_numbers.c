#include <unistd.h>

void	ft_putchar(char c)
{
	write( 1, &c, 1);
}
void	ft_print_numbers(void)
{
	char	number;
     for( number = 0; number <= 9; number++)
	{
	  ft_putchar(number +'0');
	}
}
int main () 
{
	ft_print_numbers();
	return (0);
}
