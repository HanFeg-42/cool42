/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:54:13 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/12 11:01:06 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	result_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		counter = counter + j;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return ((size - 1) * i + counter);
}

void	concatenate(int size, char **strs, char *sep, char **result)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			(*result)[c] = (strs)[i][j];
			j++;
			c++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			(*result)[c] = (sep)[j];
			c++;
			j++;
		}
		i++;
	}
	(*result)[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
		{
			result[0] = '\0';
			return (result);
		}
	}
	result = malloc(sizeof(char) * (result_size(size, strs, sep) + 1));
	if (!result)
		return (NULL);
	concatenate(size, strs, sep, &result);
	return (result);
}
#include <stdio.h>
int main()
{
	char *str[4] = {"fgj","hh","ooo"};
	char *sep = "--";
	char *c = ft_strjoin(3, str, sep);
	printf("%s",c);
}
