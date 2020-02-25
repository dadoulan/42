/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:00:08 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/11 09:30:09 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;
	int swap;

	swap = 1;
	size = (size - 1);
	while (swap > 0)
	{
		swap = 0;
		i = 0;
		j = i + 1;
		while ((j <= size) && (i < j))
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				swap++;
			}
			j++;
			i++;
		}
	}
}
