/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:34:32 by hfegrach          #+#    #+#             */
/*   Updated: 2024/07/25 20:41:50 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	d;
	long	n;

	n = nb;
	d = 1;
	if ((n <= 2147483647) && (n >= -2147483648))
	{
		if (n == 0)
			ft_putchar('0');
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		while (n > d)
			d = d * 10;
		d = d / 10;
		while (d > 0)
		{
			ft_putchar(n / d + '0');
			n = n % d;
			d = d / 10;
		}
	}
}
