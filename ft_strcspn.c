/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparabos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 08:26:45 by aparabos          #+#    #+#             */
/*   Updated: 2018/04/17 08:29:05 by aparabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strcspn(const char *s1, const char *s2)
{
	size_t	ret;

	ret = 0;
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return (ret);
		else
		{
			s1++;
			ret++;
		}
	}
	return (ret);
}
