/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:14:47 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/07 16:18:02 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 2 && nb >= 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int main()
{
	printf("%d",ft_recursive_factorial(5));
}*/
