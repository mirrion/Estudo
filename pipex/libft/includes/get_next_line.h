/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:26:03 by rosantan          #+#    #+#             */
/*   Updated: 2022/12/19 10:29:34 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1048
# endif

# include <fcntl.h>
# include "libft.h"

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin2(char *s1, char *s2);
char	*ft_strchr2(char *str, int ch);

#endif
