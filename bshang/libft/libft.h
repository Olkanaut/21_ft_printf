/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshang <bshang@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 11:31:53 by bshang            #+#    #+#             */
/*   Updated: 2020/07/24 16:17:31 by bshang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
int					ft_atoi(const char *str);
int					ft_toupper(int c);
char				*ft_itoa(int nbr);
char				*ft_itoa_base(unsigned long int value, int base);
void				ft_putchar(char c);
void				ft_putstr(char *s);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);

#endif
