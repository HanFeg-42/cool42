/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:43:29 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/12 22:05:03 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (base[k])
		k++;
	if (k < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] != base[j] && base[j] != '+' && base[j] != '-')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	base_len = 0;
	while (base[base_len])
		base_len++;
	nb = nbr;
	if (is_base_valid(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= base_len)
			ft_putnbr_base(nb / base_len, base);
		ft_putchar(base[nb % base_len]);
	}
}

/*int	main()
{
	char base[] = "0123456789abcdef";
	ft_putnbr_base(0, base);
}*/
