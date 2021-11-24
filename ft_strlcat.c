/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:50:14 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/24 16:35:52 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size <= len_dst)
		return (len_src + size);
	if (size > 0)
	{
		while (dst && dst[i])
			i++;
		while (src && src[i] && i < (size - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i] = '\0';
	}
	return (len_src + len_dst);
}
