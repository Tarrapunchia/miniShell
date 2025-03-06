/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   balance_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:38:30 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_unbalanced(char *tmp, t_state *quote_state, t_state *paren_state,
		t_type *type)
{
	*quote_state = check_quote_balance(tmp);
	*paren_state = check_paren_balance(tmp);
	*type = ft_get_last_token_type(tmp);
	return (*quote_state != INIT || (*paren_state != INIT
			&& *paren_state != ERROR) || is_continuation_token(*type)
		|| *paren_state == 6);
}
