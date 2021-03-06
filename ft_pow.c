/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparabos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:56:36 by aparabos          #+#    #+#             */
/*   Updated: 2017/11/10 17:06:10 by aparabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	if (n > 0)
		return (nb * ft_pow(nb, (n - 1)));
	return (nb);
}
