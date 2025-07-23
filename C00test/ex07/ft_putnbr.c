#include <unistd.h>

void	ft_putnbr(int nb)
{
	long n;
	char i;
		n = nb;
		if (n < 0)
 		{
		  write(1 , "-",1);
		  n=-n;
		}
		if ( n >= 10)
		{
		  ft_putnbr(n / 10);
		}
		i = ( n % 10) +'0';
		write(1, &i, 1);
}
int main () 
{
  ft_putnbr(0);
 
	return (0);
}
