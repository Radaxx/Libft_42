/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparabos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:47:04 by aparabos          #+#    #+#             */
/*   Updated: 2017/11/10 16:47:27 by aparabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i < 0)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
