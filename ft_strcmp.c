/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:10:33 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/30 18:11:45 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	size_t s1len;
	size_t s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len <= s2len)
		return (ft_memcmp(s1, s2, s1len + 1));
	else
		return (ft_memcmp(s1, s2, s2len + 1));
}
