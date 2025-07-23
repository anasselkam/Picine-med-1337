#include <unistd.h>
void ft_putstr(char *str) 
{
 int i;
 i = 0;
	while ( str[i] != '\0') 
{
	write ( 1, &str[i], 1);
	i++;
}
}
int main () 
{
  char *my_string;
  my_string ="Hello, world!";
 ft_putstr(my_string);
  ft_putstr("\nThis is a test.");
return (0) ;
}
