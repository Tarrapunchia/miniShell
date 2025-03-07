/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grammar_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:29:05 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	init_controller(t_token **prev, t_token **current,
				t_token **next, t_token *token)
{
	*prev = NULL;
	*current = skip_space_tokens(token);
	*next = skip_space_tokens((*current)->next);
}

static void	update_controller(t_token **prev, t_token **current, t_token **next)
{
	*prev = *current;
	*current = *next;
	if ((*next) != NULL)
	{
		*next = skip_space_tokens((*next)->next);
	}
}

// void	print_exception(t_token *prev, t_token *current, t_token *next)
// {
// 	if (prev != NULL)
// 		printf("prev: %d\n", prev->exception);
// 	printf("current: %d\n", current->exception);
// 	if (next != NULL)
// 		printf("next: %d\n", next->exception);
// }

int	check_grammatical_rules(t_token *token)
{
	t_token	*current;
	t_token	*prev;
	t_token	*next;
	int		flag;

	flag = 0;
	init_controller(&prev, &current, &next, token);
	while (current != NULL && flag == 0)
	{
		if (current->exception == 1)
			handle_logic_operator(prev, current, next, &flag);
		else if (current->exception == 2)
			handle_redirect_operator(prev, current, next, &flag);
		else if (current->exception == 3)
			handle_parenthesis_open_operator(prev, current, next, &flag);
		else if (current->exception == 4)
			handle_parenthesis_close_operator(prev, current, next, &flag);
		else if (current->exception == 0)
			handle_word_operator(prev, current, next, &flag);
		else
			flag = print_syntax_error("unknown");
		update_controller(&prev, &current, &next);
	}
	return (flag == 0);
}
