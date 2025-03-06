/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arrays.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:51:07 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free_arrays(void **ar1, void **ar2, void **ar3)
{
	int	flag;

	flag = 0;
	if (ar1)
	{
		flag++;
		free(*ar1);
	}
	if (ar2)
	{
		flag++;
		free(*ar2);
	}
	if (ar3)
	{
		flag++;
		free(*ar3);
	}
	return (flag);
}

// ft_free_arrays((void *)&arr, (void *)&lis, (void *)&prev_ind);