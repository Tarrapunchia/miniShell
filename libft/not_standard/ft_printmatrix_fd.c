/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmatrix_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:23:49 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printmatrix_fd(char **matrix, int fd, int flag)
{
	int	i;

	i = 0;
	if (flag)
		ft_putstr_fd("<--BEGIN-->:\n", fd);
	while (matrix[i])
	{
		ft_putstr_fd(matrix[i], fd);
		ft_putchar_fd('\n', fd);
		i++;
	}
	if (flag)
		ft_putstr_fd("<---END--->.\n", fd);
	return (i);
}
