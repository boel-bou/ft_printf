/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:30:26 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/21 17:58:29 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
void	ft_putchar_pr(int c, size_t *cmp);
void	ft_putstr_pr(char *s, size_t *cmp);
void	ft_putnbr_pr(int n, size_t *cmp);
void	ft_putuns_pr(unsigned int n, size_t *cmp);
void	ft_puthex_pr(unsigned long n, size_t *cmp, char *base);
void	ft_format(va_list args, char *s, size_t *cmp);
void	ft_isptr(size_t *cmp, va_list args);
#endif
