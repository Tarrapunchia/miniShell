/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:04:51 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:04:53 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/* Ritorno i se la variabile esiste, altrimenti ritorno 0 */
int	find_in_env(char **env, char *to_find)
{
	int	i;

	i = 0;
	while (env[i] && ft_strcmp_env(to_find, env[i]) != 0)
		i++;
	if (!env[i])
		return (0);
	return (i);
}
