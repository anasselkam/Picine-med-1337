/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kham <ael-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:20:04 by ael-kham          #+#    #+#             */
/*   Updated: 2025/07/26 18:40:44 by ael-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start_index;
	int	end_index;
	int	temp;

	start_index = 0;
	end_index = size - 1;
	while (start_index < end_index)
	{
		temp = tab[start_index];
		tab[start_index] = tab[end_index];
		tab[end_index] = temp;
		start_index++;
		end_index--;
	}
}
