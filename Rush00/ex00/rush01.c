/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josorteg <josorteg@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:28:21 by josorteg          #+#    #+#             */
/*   Updated: 2022/07/10 16:21:14 by xagarcia         ###   ########.fr       */
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
			if (col != 1 && (fil == 1 && col == ColM))
				ft_putchar('\\');
			else if (fil != 1 && (fil == FilM && col == 1))
				ft_putchar('\\');
			else if ((fil == 1 && col == 1) || (fil == FilM && col == ColM))
				ft_putchar('/');
			else if ((col == 1 || col == ColM) || (fil == 1 || fil == FilM))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
