int	is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

void	str_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start_of_word;

	i = 0;
	is_start_of_word = 1;
	str_to_lower(str);
	while (str[i] != '\0')
	{
		if (is_start_of_word == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		if (is_alphanumeric(str[i]))
		{
			is_start_of_word = 0;
		}
		else
		{
			is_start_of_word = 1;
		}
		i++;
	}
	return (str);
}
