/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quotes_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:59:04 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// static int	ft_exception(int c)
// {
// 	const char	*exceptions;
// 	int			i;

// 	i = 0;
// 	exceptions = ";()|<>&";
// 	if (ft_isprint(c))
// 	{
// 		while (exceptions[i])
// 		{
// 			if (c == exceptions[i])
// 			{
// 				return (0);
// 			}
// 			i++;
// 		}
// 		return (1);
// 	}
// 	return (0);
// }

static int	quotes_len(int start, int end)
{
	return (end - start);
}

int	quotes_count(char *str, int start, int i)
{
	int		count;

	count = 0;
	while (str[++i])
	{
		if (str[i] == 34 && ft_strchr(&str[i + 1], 34))
		{
			start = i;
			i++;
			while (str[i] && str[i] != 34)
				i++;
			count += quotes_len(start, i) - 1;
		}
		else if (str[i] == 39 && ft_strchr(&str[i + 1], 39))
		{
			start = i;
			i++;
			while (str[i] && str[i] != 39)
				i++;
			count += quotes_len(start, i) - 1;
		}
		else
			count++;
	}
	return (count);
}
