/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:49:29 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 02:53:41 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pr(int n, size_t *cmp)
{
	if (n == -2147483648)
	{
		ft_putstr_pr("-2147483648", cmp);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_pr('-', cmp);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_pr(n / 10, cmp);
	ft_putchar_pr(n % 10 + '0', cmp);
}
