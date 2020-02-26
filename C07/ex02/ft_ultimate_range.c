/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:17:14 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/25 16:29:03 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		(*range = NULL);
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}

#include <stdio.h>
int main(int ac, char **av)
{
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    int **range = (int **)malloc(sizeof(**range) * (b - a));
    printf(“%d\n”, ft_ultimate_range(range, a, b));
}
