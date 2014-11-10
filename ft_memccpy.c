/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:23:53 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:23:55 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = malloc((ft_strlen(dst) + 1) * (sizeof(*s1)));
	s2 = malloc((ft_strlen(src) + 1) * (sizeof(*s2)));
	s1 = (char *)(dst);
	s2 = (char *)(src);
	i = 0;
	while (n > i && s1[i] != c)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
