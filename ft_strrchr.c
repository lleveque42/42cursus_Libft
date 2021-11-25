/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:33:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/25 21:42:10 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (s && *s)
		s++;
	if (c == 0)
		return ((char *)s);
	if (s)
		s--;
	while (s && *s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
