/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_name_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:43:39 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/* Calcolo la lunghezza del nome della variabile.
   Tutto quello che trovo dopo '$' che sia alfanumerico o '_' */
/* Potrebbe tornare utile nel while: || str[i] == '?' || str[i] == '$' */
int	var_name_len(char *str, char **env)
{
	int	i;

	i = 0;
	if (ft_strncmp(str, "$$", 2) == 0)
		return (ft_strlen(env[PID]));
	if (ft_strncmp(str, "$?", 2) == 0)
		return (ft_strlen(env[STATUS]));
	while (str[i] && (ft_isalnum(str[i]) || str[i] == '_'))
		i++;
	return (i);
}
