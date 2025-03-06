/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 02:04:11 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace_all(char *str)
{
	int	i;
	int	tot_spaces;

	i = 0;
	tot_spaces = 0;
	while (str[i] && str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 1)
			tot_spaces++;
		i++;
	}
	if (i == tot_spaces)
		return (1);
	return (0);
}
