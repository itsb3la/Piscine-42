/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josorteg <josorteg@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:28:21 by josorteg          #+#    #+#             */
/*   Updated: 2022/07/10 16:22:16 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_putchar(char x);

void	rush(int FilM, int ColM)
{
	int	fil;
	int	col;

	fil = 0;
	while (fil++ < FilM)
	{
		col = 0;
		while (col++ < ColM)
		{
			if (fil == 1 && (col == 1 || col == ColM))
				ft_putchar('A');
			else if ((fil == 1 || fil == FilM) && (col == 1 || col == ColM))
				ft_putchar('C');
			else if ((fil == 1 || fil == FilM) || (col == 1 || col == ColM))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
