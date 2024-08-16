/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:29:58 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/07 16:33:59 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= nb / 2)
	{
		j = 2;
		while (i * j <= nb)
		{
			if (i * j == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

/*int	main()
{
	printf("%d\n",ft_find_next_prime(7859));
	printf("%d",ft_is_prime(7859));
}*/
