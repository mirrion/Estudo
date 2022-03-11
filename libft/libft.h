/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:36:29 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/11 19:22:36 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *buffer, int ch, size_t count);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *str, int ch);
char	*ft_strdup(const char *s);// *
size_t	ft_strlcat(char *dst, const char *src, size_t size);// *
size_t	ft_strlcpy(char *str, char *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t count);
char	*ft_strnstr(const char	*big, const char *little, size_t len); // *
char	*ft_strrchr(const char *str, int ch);// *
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
