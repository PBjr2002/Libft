/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:50:26 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/09 12:21:52 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*new;
	t_list	*new1;
	
	new = ft_lstnew("ola");
	new1 = ft_lstnew("ola a n sei quem");
	ft_lstadd_front(&new1, new);
	printf("%s\n", (char *)new->next->next);
	printf("%s\n", (char *)new1->next->content);
	return (0);
}*/
