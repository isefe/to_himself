/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iefe <iefe@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 xx:xx:xx by iefe              #+#    #+#             */
/*   Updated: 2024/02/02 12:06:49 by iefe             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	index_of_min;

	i=0;
	while (i <= size - 2)
	{
		index_of_min = i;
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[j] < tab[index_of_min])
				index_of_min = j;
			j++;
		}
		if(index_of_min != i)
		{
			temp = tab[index_of_min];
			tab[index_of_min] = tab[i];
			tab[i] = temp;
		}
		i++;
	}
}
