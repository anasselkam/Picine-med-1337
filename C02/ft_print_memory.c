#include <unistd.h>

void	print_hex_char(unsigned char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	write(1, &hex_base[c / 16], 1);
	write(1, &hex_base[c % 16], 1);
}

void	print_line_content(unsigned char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			print_hex_char(str[i]);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;
	char		*hex_base;
	long		addr_long;
	char		addr_chars[16];
	int		j;

	i = 0;
	ptr = (unsigned char *)addr;
	hex_base = "0123456789abcdef";
	if (size == 0)
		return (addr);
	while (i < size)
	{
		addr_long = (long)(ptr + i);
		j = 15;
		while (j >= 0)
		{
			addr_chars[j] = hex_base[addr_long % 16];
			addr_long /= 16;
			j--;
		}
		write(1, addr_chars, 16);
		write(1, ": ", 2);
		print_line_content(ptr + i, size - i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
