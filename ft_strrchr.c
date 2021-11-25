/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:33:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/25 20:31:33 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (s && *s)
		s++;
	if (*s == c)
		return ((char *)s);
	s--;
	while (s && *s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
