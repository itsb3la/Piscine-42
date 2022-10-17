/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:54:18 by isitbon           #+#    #+#             */
/*   Updated: 2022/07/27 19:50:30 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	temp = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (temp);
}
