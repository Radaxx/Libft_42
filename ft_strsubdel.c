/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparabos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:55:12 by aparabos          #+#    #+#             */
/*   Updated: 2017/12/09 15:38:27 by aparabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubdel(char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (!(tmp = (char *)ft_strnew(len)))
		return (0);
	while (s[start] && i < len && tmp != NULL)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	free(s);
	return (tmp);
}
