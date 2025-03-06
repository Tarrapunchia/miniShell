/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:05:44 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
# define LEXER_H

void		lexer(char *input, t_token **token);
int			ft_is_exception(int c);
int			ft_is_double_exception(int c, int prev_c);
t_type		ft_iscmd(char *input);
t_type		ft_isdir(char *input);
t_type		ft_isfile(char *input);
t_type		ft_isword(char *input);
t_type		ft_isand(char *token);
t_type		ft_isappend(char *token);
t_type		ft_isheredoc(char *token);
t_type		ft_isor(char *token);
t_type		ft_get_token_type(char *token);

#endif
