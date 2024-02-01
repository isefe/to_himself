/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iefe <iefe@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 xx:xx:xx by iefe              #+#    #+#             */
/*   Updated: 2024/02/02 12:06:49 by iefe             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i=0;
	while (i <= (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
