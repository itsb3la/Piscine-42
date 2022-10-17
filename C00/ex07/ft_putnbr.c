/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:33:30 by alnavarr          #+#    #+#             */
/*   Updated: 2022/07/21 15:49:37 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
			ft_putnbr(nb);
		}
		else
		{
			x = (nb % 10) + '0';
			if (nb > 9)
			{
				ft_putnbr(nb / 10);
			}
			write(1, &x, 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
}
*/
