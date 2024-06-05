/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:24:20 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/30 15:26:38 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ok;
	int		notok;

	ok = lst;
	notok = 0;
	while (ok->next != NULL)
	{
		ok = ok->next;
		notok++;
	}
	return (notok);
}
