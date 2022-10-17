/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:26:36 by alnavarr          #+#    #+#             */
/*   Updated: 2022/07/21 09:33:48 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	albert(int v[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(v[i] + '0');
		i++;
	}
}

void	albertx(int v[], int n)
{
	int		i;

	i = 1;
	while (i < n)
	{
		if (v[i -1] < v[i])
			i++;
		else
			return ;
	}
	albert(v, n);
	if (v[0] < 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int		i;
	int		vect[10];

	i = 0;
	while (i < n)
	{
		vect[i] = i;
		i++;
	}
	while (vect[0] <= 10 - n)
	{
		albertx(vect, n);
		i = n;
		vect[i -1]++;
		while (i > 1)
		{
			i--;
			if (vect[i] > 9)
			{
				vect[i] = 0;
				vect[i - 1]++;
			}
		}
	}
}
/*int	main(void)
{
		ft_print_combn(9);
}*/
