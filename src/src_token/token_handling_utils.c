/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_handling_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:28:37 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	isredirection_operator(t_type type)
{
	return (type == RED_OUT || type == RED_IN || type == APPEND
		|| type == HERE_DOC);
}

int	islogical_operator(t_type type)
{
	return (type == AND || type == OR || type == SEMICOLON || type == PIPE);
}
