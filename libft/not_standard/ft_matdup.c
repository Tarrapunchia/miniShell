/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:03:27 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:06:52 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_matdup(char **mat)
{
	char	**new_mat;
	int		i;

	i = 0;
	while (mat[i])
		i++;
	new_mat = ft_calloc(i + 1, sizeof(char *));
	i = 0;
	while (mat[i])
	{
		new_mat[i] = ft_strdup(mat[i]);
		i++;
	}
	return (new_mat);
}
