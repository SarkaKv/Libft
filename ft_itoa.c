/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:24:19 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/31 15:10:52 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	getlenghtofn(int ok)
{
	int	lenghtofthenb;

	lenghtofthenb = 0;
	if (ok < 0)
	{
		lenghtofthenb++;
	}
	while (ok != 0)
	{
		ok = ok / 10;
		lenghtofthenb++;
	}
	return (lenghtofthenb);
}

char	*ft_itoa(int n)
{
	char	*thenumber;
	size_t	lenghtofthenb;
	int		tempn;

	lenghtofthenb = getlenghtofn(n);
	tempn = n;
	thenumber = (char *)malloc(sizeof(char) * lenghtofthenb);
	if (!thenumber)
		return (NULL);
	if (n > 0)
	{
		while (lenghtofthenb > 0)
		{
			printf("%zu", lenghtofthenb);
			thenumber[lenghtofthenb] = (n%10) + '0';
			printf("%s", thenumber);
			// n = n / 10;
			lenghtofthenb--;
			// tempn = n;
		}
	}
	// if (n < 0)
	// {
	// 	thenumber[0] = '-';
	// 	n = n * -1;
	// 	while (n > 0)
	// 	{
	// 		tempn = tempn % 10;
	// 		thenumber[lenghtofthenb] = tempn + '0';
	// 		lenghtofthenb--;
	// 		n = n / 10;
	// 		tempn = n;
	// 	}
	// }
	return (thenumber);
}
int	main(void)
{
	ft_itoa(456);
}
