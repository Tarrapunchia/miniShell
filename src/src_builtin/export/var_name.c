/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:48:15 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/* Estraggo il nome della variabile dalla stringa che passo e lo ritorno */
/* Potrebbe tornare utile nel while: || str[i] == '?' || str[i] == '$' */
char	*var_name(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] && (ft_isalnum(str[i]) || str[i] == '_'))
		i++;
	ret = ft_calloc(i + 1, sizeof(char));
	i = 0;
	while (str[i] && (ft_isalnum(str[i]) || str[i] == '_'))
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}
