/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:42:40 by alnavarr          #+#    #+#             */
/*   Updated: 2022/07/24 10:32:37 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
/*
int	main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int	size = 6;
	int	c;

	ft_rev_int_tab(tab, size);
	while (tab[c] <= size-1)
	{
		printf("%d",tab[c]);
		c++;
	}
	return (0);
}
*/
