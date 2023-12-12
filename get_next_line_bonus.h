/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:07:03 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/12 08:07:17 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;

int		found_newline(t_list *lst);
t_list	*find_last_node(t_list *lst);
char	*get_line(t_list *lst);
void	copy(t_list *lst, char *str);
int		len_to_newline(t_list *lst);
void	cleanin(t_list **lst);
char	*get_next_line(int fd);
void	dealloc(t_list **lst, t_list *clean_node, char *buf);
void	create_list(t_list **lst, int fd);

#endif