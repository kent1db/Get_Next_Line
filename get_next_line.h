/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qurobert <qurobert@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:38:52 by qurobert          #+#    #+#             */
/*   Updated: 2020/12/01 10:54:18 by qurobert         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*ft_strjoin_free(char *s1, char *s2);
size_t	ft_strlen(char *s);
int		ft_read(int *ret, int fd, char **buff);
int		ft_memchr(const void *s, int c, size_t n);
int		ft_last_cpy(char **line, char **buff);
void	*ft_c(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_substr(char *s, unsigned int start, size_t len, int b);

#endif
