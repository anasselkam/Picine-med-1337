#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main (void)
{
    char    *my_string;
    my_string ="Hello , 433!";
    ft_putstr(my_string);

    write(1,"\n", 1);
    ft_putstr(" \n");
    ft_putstr("this is anther test");
    write(1,"\n",1);

    return (0);

}