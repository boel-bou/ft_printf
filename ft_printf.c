/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:52:29 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 15:46:47 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_isptr(size_t *cmp, va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	ft_putstr_pr("0x", cmp);
	ft_puthex_pr((unsigned long)ptr, cmp, HEX_LOWER);
}

void	ft_format(va_list args, char *s, size_t *cmp)
{
	if (*s == 'c')
		ft_putchar_pr(va_arg(args, int), cmp);
	else if (*s == 'i' || *s == 'd')
		ft_putnbr_pr(va_arg(args, int), cmp);
	else if (*s == 's')
		ft_putstr_pr(va_arg(args, char *), cmp);
	else if (*s == 'p')
		ft_isptr(cmp, args);
	else if (*s == 'u')
		ft_putuns_pr(va_arg(args, unsigned int), cmp);
	else if (*s == 'x' || *s == 'X')
	{
		if (*s == 'x')
			ft_puthex_pr(va_arg(args, unsigned int), cmp, HEX_LOWER);
		else
			ft_puthex_pr(va_arg(args, unsigned int), cmp, HEX_UPPER);
	}
	else if (*s == '%')
		ft_putchar_pr('%', cmp);
	else
		ft_putchar_pr(*s, cmp);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	cmp;
	int		i;

	i = 0;
	cmp = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break ;
			ft_format(args, (char *)str + i, &cmp);
		}
		else
			ft_putchar_pr(str[i], &cmp);
		i++;
	}
	va_end(args);
	return ((int)cmp);
}

// int main ()
// {
// 	printf()
// }
/*
int	main()
{
	char *c = 0x45454;
	printf("%d\n", printf("%lu  %p\n", c, c));

	printf("%d\n", ft_printf("%d  %p\n", c, c));
}
*/
/*
int main()
{
	//int d = ft_printf("%p  %p", 0, 0);
	//printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	//ft_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	//int d = printf("\001\002\007\v\010\f\r\n");
	//int d = ft_printf("\001\002\007\v\010\f\r\n");
	//int d = printf(NULL);
	int d = ft_printf(NULL);
	printf("\n%d\n", d);
}
*/
/*
int main()
{

	printf("The original:\n ");
	printf("\nhh\n");
	printf("The Fake:\n ");
	ft_printf("\ntt\n");

	return 0;
}
*/
// int main()
// {
// 	printf("%a\n");
// }
