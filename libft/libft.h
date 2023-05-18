/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:17:25 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/18 09:15:48 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void			*ft_memset(void *s, int c, unsigned int n);

void			ft_bzero(void *s, unsigned int n);

void			*ft_memcpy(void *restrict dest, const void *restrict src,
					unsigned int n);

void			*ft_memccpy(void *restrict dest, const void *restrict src,
					int c, unsigned int n);

void			*ft_memmove(void *dest, const void *src, unsigned int n);

void			*ft_memchr(const void *s, int c, unsigned int n);

int				ft_memcmp(const void *s1, const void *s2, unsigned int n);

unsigned int	ft_strlen(const char *s);

char			*ft_strdup(const char *s);

char			*ft_strcpy(char *dest, const char *src);

char			*ft_strncpy(char *dest, const char *src, unsigned int n);

char			*ft_strcat(char *dest, const char *src);

char			*ft_strncat(char *dest, const char *src, unsigned int n);

char			*ft_strlcat(char *dest, const char *src, unsigned int size);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strstr(const char *haystack, const char *needle);

char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned int len);

int				ft_strcmp(const char *s1, const char *s2);

int				ft_strncmp(const char *str1, const char *str2, unsigned int n);

int				ft_atoi(const char *nptr);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

void			*ft_memalloc(unsigned int size);

void			ft_memdel(void **ap);

char			*ft_strnew(unsigned int size);

void			ft_strdel(char **as);

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char *));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(const char *s, char (*f)(char));

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));

int				ft_strequ(const char *s1, const char *s2);

int				ft_strnequ(const char *s1, const char *s2, unsigned int n);

#endif
