/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:26:26 by shkhan            #+#    #+#             */
/*   Updated: 2020/02/11 09:26:55 by shkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	int max;

	i = 0;
	max = (size / 2);
	size = (size - 1);
	while (i < max)
	{
		tmp = tab[size - i];
		tab[size - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
