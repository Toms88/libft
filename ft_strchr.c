/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:43:17 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/13 20:40:09 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != c)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)(s + (i)));
}
