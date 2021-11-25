/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:35:06 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/25 20:30:10 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!c)
	{
		while (s && *s)
			s++;
		return ((char *)s);
	}
	while (s && *s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
