/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/11/30 15:10:29 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/30 15:46:10 by lleveque         ###   ########.fr       */
=======
/*   Created: 2021/11/30 22:25:48 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/30 22:31:56 by lleveque         ###   ########.fr       */
>>>>>>> 35fa0b6902969412a537ab3d7696aab332f9d59d
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

<<<<<<< HEAD
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
=======
	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
>>>>>>> 35fa0b6902969412a537ab3d7696aab332f9d59d
	return (new);
}
