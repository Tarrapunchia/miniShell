/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:18:58 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_format(const char *file, const char *format)
{
	char	*dot;

	dot = ft_strrchr(file, '.');
	if (!dot || dot == file)
		ft_exit_error("Wrong file format.");
	if (!ft_strncmp(dot, format, 5) == 0)
		ft_exit_error("Wrong file format.");
}
