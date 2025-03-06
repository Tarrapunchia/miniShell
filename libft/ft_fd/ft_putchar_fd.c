/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:04:54 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_fd(int fd)
{
	if (fd < 0)
		return (-1);
	return (1);
}

int	ft_putchar_fd(char c, int fd)
{
	if (ft_check_fd(fd) == -1)
		return (0);
	if (write(fd, &c, 1) == -1)
		return (0);
	return (1);
}
/*write(2, "Error occurred in ft_putchar_fd\n", 32);*/

/*Parameters
	c: The character to output.
	fd: The file descriptor on which to write.
Return value
	None
External functs
	write
Description
	Outputs the character ’c’ to the given file
	descriptor.*/
