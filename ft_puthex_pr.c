/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:13:16 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/22 14:59:31 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pr(unsigned long n, size_t *cmp, char *base)
{
	if (n > 15)
	{
		ft_puthex_pr(n / 16, cmp, base);
		ft_putchar_pr(base[n % 16], cmp);
	}
	else
		ft_putchar_pr(base[n % 16], cmp);
}
