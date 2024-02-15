/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:20:19 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/09 12:25:25 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}

/*int	main(void)
{
	t_list	*new;
	t_list	*new1;

	new = ft_lstnew("");
	new1 = ft_lstnew("");
	ft_lstadd_back(&new, new1);
	printf("%d\n", ft_lstsize(new));
	return (0);
}*/
