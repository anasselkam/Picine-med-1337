/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kham <ael-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:43:07 by ael-kham          #+#    #+#             */
/*   Updated: 2025/07/26 17:59:01 by ael-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
