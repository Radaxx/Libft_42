/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparabos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:32:12 by aparabos          #+#    #+#             */
/*   Updated: 2017/11/08 16:08:33 by aparabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	char	*tmp_s1;
	char	*tmp_s2;

	i = 0;
	tmp_s1 = (char *)s1;
	tmp_s2 = (char *)s2;
	while ((*tmp_s1 && *tmp_s2) && (*tmp_s1 == *tmp_s2) && (i < len))
	{
		tmp_s1++;
		tmp_s2++;
		i++;
	}
	return ((unsigned char)*tmp_s1 - (unsigned char)*tmp_s2);
}
