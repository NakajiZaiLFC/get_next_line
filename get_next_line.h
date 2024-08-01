/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:01:15 by snakajim          #+#    #+#             */
/*   Updated: 2024/08/01 21:53:26 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# elif BUFFER_SIZE > 99999999 || BUFFER_SIZE <= 0
#  error "BUFFER_SIZE must be between 1 and 99999999"
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_string
{
	char	*str;
	size_t	len;
	size_t	capa;
}			t_string;
char	*get_next_line(int fd);
int		ft_getc(int fd);
int		ft_putc(t_string *str, char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif