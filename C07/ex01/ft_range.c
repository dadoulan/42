/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 08:28:20 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/25 19:37:28 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		while (i < atoi(argv[2]) - atoi(argv[1]))
		{
			printf("%d : %d\n", i, ft_range(atoi(argv[1]), atoi(argv[2]))[i]);
			i++;
		}
	}
	else
		printf("non.");

/*	int *tab = ft_range(0,10);
	int i =0;
	
	while (i < 10)
		printf("%d", tab[i++]);
	return(0);
*/
}
